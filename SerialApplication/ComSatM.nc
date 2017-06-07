
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
    sensor_data_t TxData;
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
        
        sensor_data_t* data = payload;
        uint16_t temp = data->temp;
        uint16_t humid = data->humid;
        uint16_t ur = data->ur;
        uint32_t priority = data->priority;
        if(call RadioSend.maxPayloadLength() < sizeof(sensor_data_t))
            command void setLCDData(SEND, temp, humid, ur);

        memcpy(&TxData, payload, sizeof(sensor_data_t)); //only memcpy
        
        post sendDataTask();
    }
    task void sendDataTask(){
        memcpy(call RadioSend.getPayload(&output), &TxData, sizeof(sensor_data_t)); //only memcpy

        if(call RadioSend.send(AM_BROADCAST_ADDR, &output, sizeof(sensor_data_t) != SUCCESS))
            post sendDataTask();
    }
    
    event void RadioSend.sendDone(message_t *msg, error_t err) {}

//////////////////////////////////////////RX
    void setLCDReceived(void *payload){
        call LCDSetter.setLCDReceivePacket(payload);
    }
    event message_t* RadioReceive.receive(message_t *msg, void *payload, uint8_t len){
        uint16_t* pkt = payload;
        sensor_data_t* data = payload;
        uint16_t temp = data->temp;
        uint16_t humid = data->humid;
        uint16_t ur = data->ur;
        uint32_t priority = data->priority;
        
        memcpy(&RxData, payload, sizeof(sensor_data_t));
        
        call LCDSetter.setLCDPayload(temp, humid, ur, priority);
        setLCDReceived(&RxData);
                                        //only memcpy
        //signal ComSat.received(&RxData);//void*->memcpy(&sensor_data_t,void)->uint16_t = *sensor_data_t->_
        signal ComSat.received2(temp, humid, ur, priority);
        
        return msg;
    }

}
