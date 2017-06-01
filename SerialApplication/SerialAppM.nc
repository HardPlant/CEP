
module SerialAppM {
  uses {
	interface Boot;
  
  interface Timer<TMilli>;

  interface LEDController;
  interface LCDSetter;
  interface TempSensor;
  interface ComSat;

  }
}
implementation {
    #define PACKET_QUEUE_LEN 12
    #define TRUE 1
    #define FALSE 0
    #define BOOL char
////////////Globals
    typedef enum {TEMP, HUMID, UR} TYPE;

    uint8_t con_i[3] = {0,};
    float ret_avg[3] = {0,};
    float ret_std[3] = {0,};
    float m2[3] = {0,};

    typedef nx_struct message{
        nx_uint32_t priority;
        nx_uint16_t readings[3];
    } Packet;

    Packet packet;

    uint8_t turn;
    BOOL isUsingLEDs;

////////////Function primitives
    task void sendPacket();
    task void setData();
    void setValues(uint16_t newValue);
    void IntervalBlink(uint8_t interval);
    void setMessage(uint16_t temp, uint16_t humid, uint16_t ur);
    
////////////Entry

    event void Boot.booted() {
        call LCDSetter.init();
        call ComSat.init();
    }

    event void ComSat.initDone(){
        call Timer.startOneShot(1000);
    }
    event void Timer.fired(){

        call TempSensor.start();
        call Timer.startOneShot(8000);
    }
    ////TX  
    event void TempSensor.done(uint16_t temp, uint16_t humid, uint16_t ur){
        packet.readings[TEMP] = temp;
        packet.readings[HUMID] = humid;
        packet.readings[UR] = ur;
        post sendPacket();
    }
    task void sendPacket(){
        call ComSat.sendData((void*)&packet); // ComSat 모듈에서는 가장 우선순위가 높은 장비만이 TX가 된다.
    }

    ////RX
    
    event void ComSat.received(void* data){ // 장비 우선도가 가장 높으면 발생하지 않는다.
        Packet* pkt = data;
        packet.readings[TEMP] = pkt->readings[TEMP];
        packet.readings[HUMID] = pkt->readings[HUMID];
        packet.readings[UR] = pkt->readings[UR];
        post setData();
    }
    task void setData(){
        setMessage(packet.readings[TEMP], packet.readings[HUMID], packet.readings[UR]);
    }

    event void LEDController.BlinkDone(){
    }
    void setMessage(uint16_t temp, uint16_t humid, uint16_t ur){
        // atomic 내의 call문 등은 주석 쳐도 실행됨. 조심할 것.
        atomic{
            if(turn == TEMP){           
                setValues(temp);
                IntervalBlink(temp - ret_avg[turn]);
                turn = HUMID;
            }
            else if(turn == HUMID){
                setValues(humid);
                IntervalBlink(humid - ret_avg[turn]);
                turn = UR;
            }            
            else if(turn == UR){
                setValues(ur);
                IntervalBlink(ur - ret_avg[turn]);
                turn = TEMP;
            }
        }
    }
    
  //              call LCDSetter.setLCD(turn,temp, ret_avg[turn],ret_std[turn]);
  
   //             call LCDSetter.setLCD(turn,humid, ret_avg[turn],ret_std[turn]);
   
     //           call LCDSetter.setLCD(turn,ur, ret_avg[turn],ret_std[turn]);
    void IntervalBlink(uint8_t interval){
        if(turn == TEMP)       call LEDController.BlinkLed0();
        else if(turn == HUMID) call LEDController.BlinkLed1();
        else if(turn == UR)    call LEDController.BlinkLed2();
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
    event void LCDSetter.SW0Pressed(){}
}
