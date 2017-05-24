
module SerialAppM {
  uses {
	interface Boot;
  
  interface Timer<TMilli>;

  interface LedController;
  interface LCDSetter;
  interface TempSensor;
  interface BaseStation;

  }
}
implementation {
    typedef enum {TEMP, HUMID, UR} TYPE;

    uint8_t con_i[3] = {0,};
    float ret_avg[3] = {0,};
    float ret_std[3] = {0,};
    float m2[3] = {0,};
    void setValues(uint16_t newValue);

    struct message{
        nx_uint16_t temp;
        nx_uint16_t humid;
        nx_uint16_t ur;
        nx_uint16_t version;
    } Packet;
    uint8_t turn;

    void initC(){
        call LCDSetter.init();
        /*call BaseStation.init();*/

    }
    event void Boot.booted() {
        initC();
        turn = TEMP;
        call Timer.startPeriodic(3000);
    }

    event void Timer.fired(){
        call LedController.BlinkLed0();
        call LedController.BlinkLed1();
        call LedController.BlinkLed2();
        call TempSensor.start();
    }
    void setMessage(uint16_t temp, uint16_t humid, uint16_t ur){
        atomic{
            if(turn == TEMP){
                setValues(temp);
                call LCDSetter.setLCD(turn,temp, ret_avg[turn],ret_std[turn]);
                turn = HUMID;
            }
            else if(turn == HUMID){
                setValues(humid);
                call LCDSetter.setLCD(turn,humid, ret_avg[turn],ret_std[turn]);
                turn = UR;
            }            
            else if(turn == UR){
                setValues(ur);
                call LCDSetter.setLCD(turn,ur, ret_avg[turn],ret_std[turn]);
                turn = TEMP;
            }
        }
    }
    event void TempSensor.done(uint16_t temp, uint16_t humid, uint16_t ur){
        setMessage(temp,humid,ur);
    }
    event void BaseStation.recv(message_t *msg, void *payload, uint8_t len){
        Packet packet;
        packet.value = (Packet*)msg->value;
        packet.avg = (Packet*)msg->avg;
        packet.stdev = (Packet*)msg->stdev;

        
    }
    void setValues(uint16_t newValue){
        
        float delta = 0;
        float delta2 = 0;
        
        delta = newValue - ret_avg[turn];
        con_i[turn]++;

        ret_avg[turn] += delta / con_i[turn];
        if(con_i[turn] == 1){ } //continues
        else {
            // Welford's algorithm
            delta2 = newValue - ret_avg[turn];
            m2[turn] += delta * delta2;
            ret_std[turn] = sqrt(m2[turn]/(con_i[turn]-1));
        }
    }
}
