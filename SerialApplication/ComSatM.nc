
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
    uint32_t devicePriority;

    sensor_data_t currentData;
////////////////////////////// Function prototype
    task void start();

    task void sendDataTask();
////////////////////////////// 

    command void ComSat.init(){
        call ElapsedTimer.startPeriodic(107); // 우선도 증가 주기와 센서 샘플링 주기가 서로소가 되게 하면 
        post start();                         // 우선도가 서로 달라지는 시점이 나온다.
    }
    event void ElapsedTimer.fired(){
        devicePriority++;
        call LCDSetter.setLCD2(devicePriority);
        if(devicePriority == 100000){
            call ElapsedTimer.stop(); // 오버플로우 방지
        }
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

    ////////////////////TX

    command void ComSat.sendData(void* data){
        sensor_data_t* pkt = data;

        currentData.temp = pkt->temp;
        currentData.humid = pkt->humid;
        currentData.ur = pkt->ur;
        currentData.priority = devicePriority; // 패킷에 장비 우선순위 삽입
    
        post sendDataTask();
    }

    task void sendDataTask(){
        memcpy(call RadioSend.getPayload(&output), &currentData, sizeof(sensor_data_t));
        call LCDSetter.setLCD(SEND,currentData.temp, currentData.humid, currentData.ur);

        if(call RadioSend.send(AM_BROADCAST_ADDR, &output, sizeof(sensor_data_t) != SUCCESS))
            post sendDataTask();
    }
    
    event void RadioSend.sendDone(message_t *msg, error_t err) {}

    ////////////////////RX

    event message_t* RadioReceive.receive(message_t *msg, void *payload, uint8_t len){
        sensor_data_t* data = payload;
        uint32_t packetPriority = data->priority;
        uint16_t datas[3];
        datas[0] = data->temp;
        datas[1] = data->humid;
        datas[2] = data->ur;
        call LCDSetter.setLCD3(packetPriority, datas);
        if(devicePriority >= packetPriority)
            return msg;

        if(call ElapsedTimer.isRunning()) call ElapsedTimer.stop();

        call LCDSetter.setLCD(RECEIVE,datas[0], datas[1], datas[2]);

        signal ComSat.received(payload);
        return msg;
    }
}