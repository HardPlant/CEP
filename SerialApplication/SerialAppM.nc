
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
    sensor_data_t sendData;

////////////Function primitives
    
    void setValues(uint16_t newValue, uint8_t type);
    void IntervalBlink(uint8_t interval);
    void setMessage(uint16_t temp, uint16_t humid, uint16_t ur, uint16_t photo);
    
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
    event void TempSensor.done(uint16_t temp, uint16_t humid, uint16_t ur, uint16_t photo){
        sendData.temp = temp;
        sendData.humid = humid;
        sendData.ur = ur;
        sendData.photo = photo;
        sendData.priority++;
        call LCDSetter.setLCDDevicePriorty(sendData.priority);

        call ComSat.sendData(&sendData);
    }

    ////RX
    event void ComSat.received(void* data){
        sensor_data_t RxData;
        uint16_t temp;
        uint16_t humid;
        uint16_t ur;
        uint16_t photo;
        uint16_t priority;
        memcpy(&RxData, data, sizeof(sensor_data_t));
        temp = RxData.temp;
        humid = RxData.humid;
        ur = RxData.ur;
        photo = RxData.photo;
        priority = RxData.priority;

        if(priority > sendData.priority){
            setMessage(temp, humid, ur, photo);
        }
    }

    event void LEDController.BlinkDone(){
    }

    ////RX Set Data
    
    uint8_t con_i[4] = {0,};
    float ret_avg[4] = {0,};
    float ret_std[4] = {0,};
    float m2[4] = {0,};
    uint8_t turn;
    uint16_t getDiff(uint16_t data1, uint16_t data2){
        if(data1<data2) return data2-data1;
        return data1-data2;
    }
    void setMessage(uint16_t temp, uint16_t humid, uint16_t ur, uint16_t photo){
        setValues(temp,TEMP);
        setValues(humid,HUMID);
        setValues(ur,UR);
        setValues(photo,PHOTO);

        if(turn == TEMP){
            IntervalBlink(getDiff(temp,ret_avg[turn]));
            call LCDSetter.setLCDData(turn,temp, ret_avg[turn],ret_std[turn]);
            turn = HUMID;
        }
        else if(turn == HUMID){
            IntervalBlink(getDiff(humid,ret_avg[turn]));
           call LCDSetter.setLCDData(turn,humid, ret_avg[turn],ret_std[turn]);
            turn = UR;
        }            
        else if(turn == UR){
            IntervalBlink(getDiff(ur,ret_avg[turn]));
              call LCDSetter.setLCDData(turn,ur,ret_avg[turn],ret_std[turn]);
            turn = PHOTO;
        }
        else if(turn == PHOTO){
              call LCDSetter.setLCDData(turn,photo,ret_avg[turn],ret_std[turn]);
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

