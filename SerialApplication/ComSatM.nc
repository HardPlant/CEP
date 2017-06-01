#include "Oscilloscope.h" // id 식별을 위해
module ComSatM
{
    provides{
        interface ComSat;
    }
  uses {
    interface Timer<TMilli> as ElapsedTimer;
    interface SplitControl as RadioControl;
    interface AMSend;
    interface Receive;
    interface LEDController;
    interface LCDSetter;
  }
}
implementation
{
//////////////////////////////  Custom Types

    typedef enum {TEMP, HUMID, UR, SEND, RECEIVE} TYPE;

    typedef nx_struct{
        nx_uint32_t priority;
        nx_uint16_t readings[3];
    } sensor_data_t;
//////////////////////////////  Globals
    
    uint8_t isTX;
    uint8_t isCounterpartMode;
    message_t output;
    nx_uint32_t devicePriority;

    sensor_data_t currentData;
////////////////////////////// Function prototype
    task void start();

    task void sendDataTask();
    void dataReceived(void *payload);

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
            isTX = 1; // 사실상 TX
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

    //TX
    event void AMSend.sendDone(message_t *msg, error_t err) {}

    command void ComSat.sendData(void* pData){
        sensor_data_t* data = (sensor_data_t*)pData;
        currentData.priority = devicePriority; // 패킷에 장비 우선순위 삽입
        memcpy(currentData.readings, data->readings, sizeof(currentData.readings));
        post sendDataTask();
    }

    task void sendDataTask(){
        call LCDSetter.setLCD(SEND,currentData.readings[TEMP]
        , currentData.readings[HUMID]
        , currentData.readings[UR]);
        memcpy(call AMSend.getPayload(&output), &currentData, sizeof(sensor_data_t));

        if(call AMSend.send(AM_BROADCAST_ADDR, &output, sizeof(sensor_data_t) != SUCCESS))
            post sendDataTask();
    }


    event void LEDController.BlinkDone(){
    };
    ////////////////////RX

    event message_t* Receive.receive(message_t *msg, void *payload, uint8_t len){
        nx_uint32_t packetPriority;
        sensor_data_t* data = payload;
        call LCDSetter.setLCD3(data ->priority, data->readings);

        packetPriority = data->priority;

        if(devicePriority >= packetPriority)
            return msg;
        if(call ElapsedTimer.isRunning()) call ElapsedTimer.stop();

        call LCDSetter.setLCD(RECEIVE,data->readings[TEMP], data->readings[HUMID],data->readings[UR]);

        signal ComSat.received(payload);

        return msg;
    }

    void dataReceived(void *payload){
    }
    event void LCDSetter.SW0Pressed(){
        call LEDController.BlinkLed0();
        call LEDController.BlinkLed1();
        call LEDController.BlinkLed2();

        if(isCounterpartMode == 1) isCounterpartMode == 0;
        else if(isCounterpartMode == 0) isCounterpartMode == 1;
    }
}