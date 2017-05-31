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
  }
}
implementation
{
//////////////////////////////  Custom Types

    typedef enum {TEMP, HUMID, UR} TYPE;

    typedef nx_struct{
        nx_uint32_t priority;
        nx_uint16_t temp;
        nx_uint16_t humid;
        nx_uint16_t ur;
        nx_uint16_t version;
    } sensor_data_t;
//////////////////////////////  Globals
    
    uint8_t isTX;
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
        currentData.temp = data->temp;
        currentData.humid = data->humid;
        currentData.ur = data->ur;
        currentData.version = data->version;
        post sendDataTask();
    }

    task void sendDataTask(){
        // getPayload로 output의 payload 영역을 구해, 그곳에 페이로드를 작성한다.
        /* memcpy로 다음과 같은 일을 한다.
            sensor_data_t* data = (sensor_data_t*) call AMSend.getPayload(&output);
            data->temp = currentData.temp; ....
        */
        memcpy(call AMSend.getPayload(&output), &currentData, sizeof(currentData));

        if(call AMSend.send(AM_BROADCAST_ADDR, &output, sizeof(sensor_data_t) != SUCCESS))
            post sendDataTask();

        if(isTX || call ElapsedTimer.isRunning()){
            call LEDController.BlinkLed0();
            call LEDController.BlinkLed1();
            call LEDController.BlinkLed2();
        }
    }


    event void LEDController.BlinkDone(){
    };
    ////////////////////RX

    event message_t* Receive.receive(message_t *msg, void *payload, uint8_t len){
        nx_uint32_t packetPriority;
        packetPriority = ((sensor_data_t*)payload)->priority;
        if(devicePriority >= packetPriority) return msg; // 받은 패킷보다 장비 우선도가 높으면 무시한다.
                                                                            // 장비 우선도가 같아도 달라질 때까지 무시한다.
        if(call ElapsedTimer.isRunning()) call ElapsedTimer.stop();
        dataReceived(payload);

        return msg;
    }

    void dataReceived(void *payload){
        signal ComSat.received(payload);
    }
}