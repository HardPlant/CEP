
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
//////////////////////////////  Globals
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
        sensor_data_t* data = (sensor_data_t*)payload;

        memcpy(call RadioSend.getPayload(&output), payload, sizeof(sensor_data_t));

        call LCDSetter.setLCDSender(data->temp, data->humid, data->ur,data->priority);
        
        post sendDataTask();
    }
    uint8_t busy = FALSE;

    task void sendDataTask(){
        if(call RadioSend.send(AM_BROADCAST_ADDR, &output, sizeof(sensor_data_t)) == SUCCESS)
            busy = TRUE;
        else
            post sendDataTask();
    }
    
    event void RadioSend.sendDone(message_t *msg, error_t err) {
        if(&output == msg)
            busy = FALSE;
    }

//////////////////////////////////////////RX
    event message_t* RadioReceive.receive(message_t *msg, void *payload, uint8_t len){

        if(len != sizeof(sensor_data_t)) return msg;

        memcpy(&RxData, payload, sizeof(sensor_data_t));
        call LCDSetter.setLCDReceivePacket(payload);

        signal ComSat.received(payload);
        
        return msg;
    }

}
