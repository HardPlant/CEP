
module SerialAppM {
  uses {
	interface Boot;
  
  interface Timer<TMilli>;

  interface LedController;
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

////////////Function primitives
    task void sendPacket();
    task void setData();
    void setValues(uint16_t newValue);
    void IntervalBlink(uint8_t interval);
    void setMessage(uint16_t temp, uint16_t humid, uint16_t ur);
////////////Globals
    typedef enum {TEMP, HUMID, UR} TYPE;
    typedef enum {RX,TX} ROLE;
    
    uint8_t deviceRole;

    uint8_t con_i[3] = {0,};
    float ret_avg[3] = {0,};
    float ret_std[3] = {0,};
    float m2[3] = {0,};

    typedef nx_struct message{
        nx_uint16_t temp;
        nx_uint16_t humid;
        nx_uint16_t ur;
        nx_uint16_t version;
    } Packet;
    Packet packet;
    uint8_t turn;
    Packet packetQueue[PACKET_QUEUE_LEN];
    uint8_t packetIndex;
    uint8_t currentPacketIndex;
    BOOL isUsingLEDs;

////////////Entry
    void packetInsert(Packet* pkt);
    Packet* packetPop();
    
    void packetInsert(Packet* pkt){
        if(pkt == NULL) return;
        memcpy(&(packetQueue[packetIndex]),pkt, sizeof(Packet));
        packetIndex = (packetIndex + 1) % PACKET_QUEUE_LEN;

    }
    Packet* packetPop(){
        Packet* result = &(packetQueue[currentPacketIndex]);
        currentPacketIndex = (currentPacketIndex + 1) % PACKET_QUEUE_LEN;
        return result;
    }

    event void Boot.booted() {
        call LCDSetter.init();
        call ComSat.init();
    }

    event void ComSat.initDone(uint8_t role){
        deviceRole = role;
        call Timer.startOneShot(1000);
    }
    event void Timer.fired(){
        if (deviceRole != TX) return;

        call TempSensor.start();
        call Timer.startOneShot(8000);
    }
    ////TX
    event void TempSensor.done(uint16_t temp, uint16_t humid, uint16_t ur){
        packet.temp = temp;
        packet.humid = humid;
        packet.ur = ur;
        post sendPacket();
    }
    task void sendPacket(){
        call LedController.BlinkLed0();
        call LedController.BlinkLed1();
        call LedController.BlinkLed2();
        call ComSat.sendData((void*)&packet);
    }
    ////RX
    
    event void ComSat.received(void* data){
        if(deviceRole != RX) return;
        packetInsert((Packet*)data);
        post setData();
    }
    task void setData(){
        Packet* data;
        if(isUsingLEDs == TRUE)
            post setData();

        data = packetPop();
        if(data == NULL) return;

        memcpy(&packet,data, sizeof(Packet));
        setMessage(packet.temp, packet.humid, packet.ur);
    }

    event void LedController.BlinkDone(){
        // IntervalBlink가 끝날 때까지 LED를 block한다.
        isUsingLEDs = FALSE;
    }
    void setMessage(uint16_t temp, uint16_t humid, uint16_t ur){
        atomic{
            isUsingLEDs = TRUE;
            if(turn == TEMP){           
                setValues(temp);
                IntervalBlink(temp - ret_avg[turn]); // float->uint16_t로 캐스팅됨
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
                IntervalBlink(ur - ret_avg[turn]);
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
