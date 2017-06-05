
#include "AM.h"
module ComSatM
{
    provides{
        interface ComSat;
    }
  uses {
    interface Timer<TMilli> as ElapsedTimer;
    interface SplitControl as RadioControl;
    interface AMSend as RadioSend;
    interface Receive as RadioReceive;

    interface LCDSetter;
  }
}
implementation
{
//////////////////////////////  Custom Types
    #include "sensor.h"
//////////////////////////////  Globals
    message_t output;
    uint16_t devicePriority;
    uint8_t isRunning;
    sensor_data_t TxData;
    sensor_data_t RxData;
////////////////////////////// Function prototype
    task void start();
    task void sendDataTask();
////////////////////////////// 

    command void ComSat.init(){
        isRunning = 1;
        call ElapsedTimer.startPeriodic(107); // 우선도 증가 주기와 센서 샘플링 주기가 서로소가 되게 하면 
        post start();                         // 우선도가 서로 달라지는 시점이 나온다.
    }

    task void start(){
        if(call RadioControl.start() != SUCCESS);
        post start();
    }
    
    event void ElapsedTimer.fired(){
        devicePriority++;
        call LCDSetter.setLCD2(devicePriority);
        if(devicePriority == 10000){
            call ElapsedTimer.stop(); // 오버플로우 방지
            isRunning = 0;
        }
    }
    
    event void RadioControl.startDone(error_t error) {
        signal ComSat.initDone();
    }
    event void RadioControl.stopDone(error_t error) {
    }
    
//////////////////////////////////////////TX
    command void sendData(void* data){
        sensor_data_t* pkt = (sensor_data_t*) data;
        memcpy(&TxData, data, sizeof(sensor_data_t)); //
        post sendDataTask();
    }
    task void sendDataTask(){
        memcpy(call RadioSend.getPayload(&output), &TxData, sizeof(sensor_data_t));

        if(call RadioSend.send(AM_BROADCAST_ADDR, &output, sizeof(sensor_data_t) != SUCCESS))
            post sendDataTask();
    }
    
    event void RadioSend.sendDone(message_t *msg, error_t err) {}

//////////////////////////////////////////RX
    event message_t* RadioReceive.receive(message_t *msg, void *payload, uint8_t len){
        uint16_t packetPriority;
        sensor_data_t* pkt = payload;
        packetPriority = pkt->priority;

        if(devicePriority >= packetPriority)
            return msg;

        if(isRunning){
            isRunning = 0;
            call ElapsedTimer.stop();
        }

        signal ComSat.received(payload);
        
        return msg;
    }

}
    