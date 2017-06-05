
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
        /*
        sendData.temp = temp;
        sendData.humid = humid;
        sendData.ur = ur; */
        
        localData.temp = temp;
        localData.humid = humid;
        localData.ur = ur;
        
        post sendDataTask();
    }
    task void sendDataTask(){
        call ComSat.sendData(&sendData);
    }

    ////RX

    event void ComSat.received(void* data){
        sensor_data_t* pkt = data;
        memcpy(&localData, pkt, sizeof(sensor_data_t));
        post setData();
    }

    task void setData(){
        uint16_t temp = localData.temp;
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
            call LCDSetter.setLCD(turn,temp, ret_avg[turn],ret_std[turn]);
            turn = HUMID;
        }
        else if(turn == HUMID){
            IntervalBlink(humid - ret_avg[turn]);
           call LCDSetter.setLCD(turn,humid, ret_avg[turn],ret_std[turn]);
            turn = UR;
        }            
        else if(turn == UR){
            IntervalBlink(ur - ret_avg[turn]);
              call LCDSetter.setLCD(turn,ur, ret_avg[turn],ret_std[turn]);
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