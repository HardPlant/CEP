
#include "AM.h"
#include "sensor.h"
module ComSatM
{
    provides{
        interface ComSat;
    }
  uses {
    interface SplitControl as RadioControl;
    interface AMSend as RadioSend;
    interface Receive as RadioReceive;

    interface LCDSetter;
  }
}
implementation
{
//////////////////////////////  Custom Types
//////////////////////////////  Globals\

    message_t output;

    sensor_data_t RxData;
////////////////////////////// Function prototype
    task void start();
    task void sendDataTask();
////////////////////////////// 

    command void ComSat.init(){
        post start();
    }

    task void start(){
        if(call RadioControl.start() != SUCCESS);
        post start();
    }
    
    event void RadioControl.startDone(error_t error) {
        signal ComSat.initDone();
    }
    event void RadioControl.stopDone(error_t error) {
    }
    
//////////////////////////////////////////TX
    command void ComSat.sendData(void* payload){ // sensor_data_t->void*->memcpy(sensor_data_t*,void*)
        sensor_data_t* target = (sensor_data_t*)(call RadioSend.getPayload(&output));
        sensor_data_t* data = (sensor_data_t*)payload;

        target->temp = data->temp;
        target->humid = data->humid;
        target->ur = data->ur;
        target->priority = data->priority;

        call LCDSetter.setLCDSender(target->temp, target->humid, target->ur,target->priority);
        
        post sendDataTask();
    }
    uint8_t busy = FALSE;

    task void sendDataTask(){
        if(call RadioSend.send(AM_BROADCAST_ADDR, &output, sizeof(sensor_data_t) == SUCCESS))
            busy = TRUE;
        else
            post sendDataTask();
    }
    
    event void RadioSend.sendDone(message_t *msg, error_t err) {
        if(&output == msg)
            busy = FALSE;
    }

//////////////////////////////////////////RX
    void setLCDReceived(void *payload){
        call LCDSetter.setLCDReceivePacket(payload);
    }
    event message_t* RadioReceive.receive(message_t *msg, void *payload, uint8_t len){
        sensor_data_t* data = (sensor_data_t*)payload;
        uint16_t temp = data->temp;
        uint16_t humid = data->humid;
        uint16_t ur = data->ur;
        uint16_t priority = data->priority;

        if(len != sizeof(sensor_data_t)) return msg;

        memcpy(&RxData, payload, sizeof(sensor_data_t));
        setLCDReceived(payload);
                                        //only memcpy
        signal ComSat.received(temp, humid, ur, priority);
        
        return msg;
    }

}
