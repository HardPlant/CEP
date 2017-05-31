
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
        nx_uint16_t temp;
        nx_uint16_t humid;
        nx_uint16_t ur;
        nx_uint16_t version;
    } Packet;

    Packet packet;

    uint8_t turn;
    uint16_t currentVersion;
    Packet packetQueue[PACKET_QUEUE_LEN];
    uint8_t packetIndex;
    uint8_t currentPacketIndex;
    BOOL isUsingLEDs;

////////////Function primitives
    task void sendPacket();
    task void setData();
    void setValues(uint16_t newValue);
    void IntervalBlink(uint8_t interval);
    void setMessage(uint16_t temp, uint16_t humid, uint16_t ur);
    
    void packetInsert(Packet* pkt);
    Packet* packetPop();

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
        packet.temp = temp;
        packet.humid = humid;
        packet.ur = ur;
        packet.version = currentVersion++;
        post sendPacket();
    }
    task void sendPacket(){
        call ComSat.sendData((void*)&packet); // ComSat 모듈에서는 가장 우선순위가 높은 장비만이 TX가 된다.
    }

    ////RX
    
    event void ComSat.received(void* data){ // 장비 우선도가 가장 높으면 발생하지 않는다.
        packetInsert((Packet*)data);
        post setData();
    }
    task void setData(){
        Packet* data;
        if(isUsingLEDs == TRUE){
            post setData();
            return;
        }

        data = packetPop();
        if(data == NULL) return;

        memcpy(&packet,data, sizeof(Packet));
        setMessage(packet.temp, packet.humid, packet.ur);
    }

    void packetInsert(Packet* pkt){
        if(pkt == NULL) return;
        if(pkt->version <= packet.version) return;

        currentVersion = pkt->version;

        memcpy(&(packetQueue[packetIndex]),pkt, sizeof(Packet));
        packetIndex = (packetIndex + 1) % PACKET_QUEUE_LEN;

    }
    Packet* packetPop(){
        Packet* result = &(packetQueue[currentPacketIndex]);
        currentPacketIndex = (currentPacketIndex + 1) % PACKET_QUEUE_LEN;
        return result;
    }

    event void LEDController.BlinkDone(){
        // IntervalBlink가 끝날 때까지 LED를 block한다.
        isUsingLEDs = FALSE;
    }
    void setMessage(uint16_t temp, uint16_t humid, uint16_t ur){
        atomic{
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
        isUsingLEDs = TRUE;
        if(turn == TEMP)       call LEDController.IntervalBlinkLed0(interval);
        else if(turn == HUMID) call LEDController.IntervalBlinkLed1(interval);
        else if(turn == UR)    call LEDController.IntervalBlinkLed2(interval);
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
