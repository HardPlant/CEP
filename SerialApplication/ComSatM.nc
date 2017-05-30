#include "Oscilloscope.h" // id 식별을 위해
module ComSatM
{
    provides{
        interface ComSat;
    }
  uses {
    interface Timer<TMilli>;
    interface SplitControl as RadioControl;
    interface AMSend;
    interface Receive;
    interface Random;
  }
}
implementation
{
//////////////////////////////  Structs
    typedef nx_struct{
        nx_int16_t priority;
    } priority_t;

    typedef nx_struct{
        nx_uint16_t temp;
        nx_uint16_t humid;
        nx_uint16_t ur;
        nx_uint16_t version;
    } sensor_data_t;
//////////////////////////////  Globals
    typedef enum {RX,TX} ROLE;
    
    uint8_t deviceRole;
    uint8_t isRolePhase = 1;
    message_t output;
    priority_t devicePriority;

    sensor_data_t currentData;
////////////////////////////// Function prototype
    task void start();

    task void setPriority();
    void priorityReceived(void *payload);

    task void sendDataTask();
    void dataReceived(void *payload);
////////////////////////////// 

    command void ComSat.init(){
        post start();
    }

    task void start(){
        if(call RadioControl.start() != SUCCESS);
        post start(); // restarts task
    }

    event void RadioControl.startDone(error_t error) {
        post setPriority();
    }

    event void RadioControl.stopDone(error_t error) {
    }
//////Role Routine
    task void setPriority(){
        devicePriority.priority = call Random.rand16();
        /*
        priority_t* data = (priority_t*) call AMSend.getPayload(&output);
        data->priority = devicePriority;
        */
        memcpy(call AMSend.getPayload(&output), &devicePriority, sizeof(devicePriority));

        if(call AMSend.send(AM_BROADCAST_ADDR, &output, sizeof(priority_t) != SUCCESS))
            post setPriority();
    }
    //TX
    command void ComSat.sendData(void* pData){
        sensor_data_t* data = (sensor_data_t*)pData;
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
            data->temp = currentData.temp;
            data->humid = currentData.humid;
            data->ur = currentData.ur;
            data->version = currentData.version;
        */
        memcpy(call AMSend.getPayload(&output), &currentData, sizeof(currentData));

        if(call AMSend.send(AM_BROADCAST_ADDR, &output, sizeof(sensor_data_t) != SUCCESS))
            post sendDataTask();
    }

    event void AMSend.sendDone(message_t *msg, error_t err) {}

    event message_t* Receive.receive(message_t *msg, void *payload, uint8_t len){
        // 상태를 가진 간단한 router.
        if(isRolePhase)
            priorityReceived(payload);
        else
            dataReceived(payload);
        return msg;
    }

    void priorityReceived(void *payload){
        // 장비 역할을 정하고 initDone()을 발생한다.
        // 한 번 receive()할 때 마다 
        priority_t* data = (priority_t*)payload;
        if(devicePriority.priority == data->priority){
            //우선도가 같으면 재시도한다.
            post setPriority(); // retry
            return;
        }
        if(devicePriority.priority < data->priority)
        {
            deviceRole = TX;
        }
        else // devicePriority > data->priority
        {
            deviceRole = RX;
        }
        isRolePhase = 0;
        call Timer.startOneShot(1000);
    }
    event void Timer.fired(){
        signal ComSat.initDone(deviceRole);
    }
    ////////////////////RX
    void dataReceived(void *payload){
        /*sensor_data_t* data = (sensor_data_t*)payload;*/
        signal ComSat.received(payload);
    }
}