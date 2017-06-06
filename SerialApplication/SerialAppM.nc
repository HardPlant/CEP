
module SerialAppM {
  uses {
	interface Boot;
  
  interface Timer<TMilli> as Timer;

  interface LEDController;
  interface LCDSetter;
  interface TempSensor;
  interface ComSat;
  }
}
implementation {
    #include "sensor.h"

////////////Globals
    sensor_data_t localData;
    sensor_data_t sendData;

////////////Function primitives
    
    task void setData();
    void setValues(uint16_t newValue, uint8_t type);
    void IntervalBlink(uint8_t interval);
    void setMessage(uint16_t temp, uint16_t humid, uint16_t ur);
    task void sendDataTask();
    
////////////Entry
    task void test1(){
        sensor_data_t mock;
        void* pVoid;
        sensor_data_t* pSDT;

        sensor_data_t result;
        uint16_t temp, humid, ur;
        uint32_t priority;

        mock.temp = 0x12;
        mock.humid = 0x34;
        mock.ur = 0x56;
        mock.priority = 0x78;

        pVoid = (void*)&mock;
        memcpy(&result, pVoid, sizeof(sensor_data_t));
        pSDT = pVoid;
        temp = pSDT->temp;
        humid = pSDT->humid;
        ur = pSDT->ur;

////////sensor_data_t -> void* -> senson_data_t* -> uint16_t
        if(temp != 0x12) call LEDController.BlinkLed0();
        if(humid != 0x34) call LEDController.BlinkLed0();
        if(ur != 0x56) call LEDController.BlinkLed0();

////////sensor_data_t->memcpy(sensor_data_t)
        if(result.temp != 0x12) call LEDController.BlinkLed1();
        if(result.humid != 0x34) call LEDController.BlinkLed1();
        if(result.ur != 0x56) call LEDController.BlinkLed1();
        
        temp = result.temp;
        humid = result.humid;
        ur = result.ur;
        
////////sensor_data_t->memcpy(sensor_data_t)->uint16_t
        if(result.temp != 0x12) call LEDController.BlinkLed2();
        if(result.humid != 0x34) call LEDController.BlinkLed2();
        if(result.ur != 0x56) call LEDController.BlinkLed2();

///////sensor_data_t->void*->uint16_t->sensor_data_t->uint16_t
    }
    task void test2(){
        sensor_data_t mock;
        void* pSend;
        void* pReceive;
        sensor_data_t result;
        uint16_t temp, humid, ur;
        uint32_t priority;
        
        mock.temp = 0x12;
        mock.humid = 0x34;
        mock.ur = 0x56;
        mock.priority = 0x78;

        pSend = &mock;
        pReceive = pSend;
        memcpy(&result, pReceive, sizeof(sensor_data_t));
        if(result.temp != 0x12) call LEDController.BlinkLed0();
        if(result.humid != 0x34) call LEDController.BlinkLed0();
        if(result.ur != 0x56) call LEDController.BlinkLed0();

        temp = result.temp;
        humid = result.humid;
        ur = result.ur;
        if(temp != 0x12) call LEDController.BlinkLed1();
        if(humid != 0x34) call LEDController.BlinkLed1();
        if(ur != 0x56) call LEDController.BlinkLed1();
    }
    task void testInit(){
        post test1();
        post test2();
    }

    event void Boot.booted() {
        /*
        call LCDSetter.init();
        call ComSat.init();
        */
        uint16_t counter = 0;
        post test1();
        while(counter != 500) counter++;
        post test2();

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
        /*
        sendData.temp = temp;
        sendData.humid = humid;
        sendData.ur = ur;
        sendData.priority++; */
        
        localData.temp = temp;
        localData.humid = humid;
        localData.ur = ur; // sensor_data_t = uint16_t ((byte reverse))
        localData.priority++;
        call LCDSetter.setLCDDevicePriorty(localData.priority);
        
        post sendDataTask();
    }
    task void sendDataTask(){
        call ComSat.sendData(&sendData);
    }

    ////RX

    event void ComSat.received(void* data){
        sensor_data_t* pkt = data; //void*->memcpy(&sensor_data_t,void)
        if(pkt->priority > localData.priority){
            memcpy(&localData, pkt, sizeof(sensor_data_t));
            post setData();
        }
    }

    task void setData(){
        uint16_t temp = localData.temp; // uint16_t = sensor_data_t.x (byte reverse)
        uint16_t humid = localData.humid;
        uint16_t ur = localData.ur;
        setMessage(temp, humid, ur);
    }

    event void LEDController.BlinkDone(){
    }

    ////RX Set Data
    
    uint8_t con_i[3] = {0,};
    float ret_avg[3] = {0,};
    float ret_std[3] = {0,};
    float m2[3] = {0,};
    uint8_t turn;

    void setMessage(uint16_t temp, uint16_t humid, uint16_t ur){
        setValues(temp,TEMP);
        setValues(humid,HUMID);
        setValues(ur,UR);

        if(turn == TEMP){
            IntervalBlink(temp - ret_avg[turn]);
            call LCDSetter.setLCDData(turn,temp, ret_avg[turn],ret_std[turn]);
            turn = HUMID;
        }
        else if(turn == HUMID){
            IntervalBlink(humid - ret_avg[turn]);
           call LCDSetter.setLCDData(turn,humid, ret_avg[turn],ret_std[turn]);
            turn = UR;
        }            
        else if(turn == UR){
            IntervalBlink(ur - ret_avg[turn]);
              call LCDSetter.setLCDData(turn,ur, ret_avg[turn],ret_std[turn]);
            turn = TEMP;
        }
    }

    void setValues(uint16_t newValue, uint8_t type){
        float delta = 0;
        float delta2 = 0;
        
        delta = newValue - ret_avg[type];
        con_i[type]++;

        ret_avg[type] += delta / con_i[type];
        if(con_i[type] == 1){ } //continues
        else {
            // Welford's algorithm
            delta2 = newValue - ret_avg[type];
            m2[type] += delta * delta2;
            ret_std[type] = sqrt(m2[type]/(con_i[type]-1));
        }
    }
   
    void IntervalBlink(uint8_t interval){
        if(turn == TEMP)       call LEDController.IntervalBlinkLed0(interval);
        else if(turn == HUMID) call LEDController.IntervalBlinkLed1(interval);
        else if(turn == UR)    call LEDController.IntervalBlinkLed2(interval);
    } 
}

