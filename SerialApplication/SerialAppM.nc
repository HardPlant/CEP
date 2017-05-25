
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
    void IntervalBlink(uint8_t interval);
    typedef struct message{
        nx_uint16_t temp;
        nx_uint16_t humid;
        nx_uint16_t ur;
        nx_uint16_t version;
    } Packet;
    uint8_t turn;

    void initC(){
        call LCDSetter.init();
        call BaseStation.init();

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
                IntervalBlink(temp - ret_avg[turn]);
                call LCDSetter.setLCD(turn,temp, ret_avg[turn],ret_std[turn]);
                turn = HUMID;
            }
            else if(turn == HUMID){
                setValues(humid);
                IntervalBlink(humid - ret_avg[turn]);
                call LCDSetter.setLCD(turn,humid, ret_avg[turn],ret_std[turn]);
                turn = UR;
            }            
            else if(turn == UR){
                setValues(ur);
                IntervalBlink(humid - ret_avg[turn]);
                call LCDSetter.setLCD(turn,ur, ret_avg[turn],ret_std[turn]);
                turn = TEMP;
            }
        }
    }
    void IntervalBlink(uint8_t interval){
        if(turn == TEMP)  return call LedController.IntervalBlinkLed0(interval);
        if(turn == HUMID) return call LedController.IntervalBlinkLed1(interval);
        if(turn == UR)    return call LedController.IntervalBlinkLed2(interval);
    }
    event void TempSensor.done(uint16_t temp, uint16_t humid, uint16_t ur){
        Packet packet;
        packet.temp = temp;
        packet.humid = humid;
        packet.ur = ur;

        call BaseStation.sendPacket((void*)&packet, sizeof(packet));
    }
    event void BaseStation.recvPacket(void* msg){
        Packet* packet = (Packet*)msg;
        setMessage(packet->temp,packet->humid, packet->ur);

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
