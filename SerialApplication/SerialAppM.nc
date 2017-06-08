#include "sensor.h"
module SerialAppM {
  uses {
	interface Boot;
  
  interface Timer<TMilli> as Timer;

    interface SplitControl as RadioControl;
    interface AMSend as RadioSend;
    interface Receive as RadioReceive;

  interface LEDController;
  interface LCDSetter;
  interface TempSensor;
//  interface ComSat;
  }
}
implementation {

////////////Globals
    sensor_data_t sendData;

    message_t output;

    sensor_data_t RxData;

////////////Function primitives
    
    void setValues(uint16_t newValue, uint8_t type);
    void IntervalBlink(uint8_t interval);
    void setMessage(uint16_t temp, uint16_t humid, uint16_t ur);
    void sendstart();
    void sendDataPayload();

    task void start();
    task void sendDataTask();
    
////////////Entry

    event void Boot.booted() {
        call LCDSetter.init();
        post start();
        //call ComSat.init();
    }/*
    event void ComSat.initDone(){
        call Timer.startOneShot(1000);
    }*/

    event void Timer.fired(){
        call TempSensor.start();
        call Timer.startOneShot(8000);
    }

    task void start(){
        if(call RadioControl.start() != SUCCESS);
        post start();
    }
    
    event void RadioControl.startDone(error_t error) {
        sendstart();
    }
    void sendstart(){
        call Timer.startOneShot(1000);
    }

    event void RadioControl.stopDone(error_t error) {
    }
    ////TX  
    event void TempSensor.done(uint16_t temp, uint16_t humid, uint16_t ur){
        sendData.temp = temp;
        sendData.humid = humid;
        sendData.ur = ur;
        sendData.priority++;
        call LCDSetter.setLCDDevicePriorty(sendData.priority);

        //call ComSat.sendData(&sendData);
        sendDataPayload();
    }
    uint8_t busy = FALSE;

    void sendDataPayload(){ // sensor_data_t->void*->memcpy(sensor_data_t*,void*)
        sensor_data_t* target = (sensor_data_t*)(call RadioSend.getPayload(&output));

        target->temp = sendData.temp;
        target->humid = sendData.humid;
        target->ur = sendData.ur;
        target->priority = sendData.priority;

        call LCDSetter.setLCDSender(target->temp, target->humid, target->ur,target->priority);
        
        if(call RadioSend.send(AM_BROADCAST_ADDR, &output, sizeof(sensor_data_t) == SUCCESS))
            busy = TRUE;
    }

    task void sendDataTask(){
    }
    
    event void RadioSend.sendDone(message_t *msg, error_t err) {
        if(&output == msg)
            busy = FALSE;
    }
    ////RX
    /*
    event void ComSat.received(uint16_t temp, uint16_t humid, uint16_t ur, uint16_t priority){
        if(priority > sendData.priority){
            setMessage(temp, humid, ur);
        }
    }
    */
    
    event message_t* RadioReceive.receive(message_t *msg, void *payload, uint8_t len){
        sensor_data_t* data = (sensor_data_t*)payload;
        uint16_t temp = data->temp;
        uint16_t humid = data->humid;
        uint16_t ur = data->ur;
        uint16_t priority = data->priority;

        if(len != sizeof(sensor_data_t)) return msg;

        if(priority > sendData.priority){
            setMessage(temp, humid, ur);
        }
        
        return msg;
    }


    event void LEDController.BlinkDone(){
    }

    ////RX Set Data
    
    uint8_t con_i[3] = {0,};
    float ret_avg[3] = {0,};
    float ret_std[3] = {0,};
    float m2[3] = {0,};
    uint8_t turn;
    uint16_t getDiff(uint16_t data1, uint16_t data2){
        if(data1<data2) return data2-data1;
        return data1-data2;
    }
    void setMessage(uint16_t temp, uint16_t humid, uint16_t ur){
        setValues(temp,TEMP);
        setValues(humid,HUMID);
        setValues(ur,UR);

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

