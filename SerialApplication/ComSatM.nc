#include "Oscilloscope.h" // id 식별을 위해
module ComSatM
{
    provides{
        interface ComSat;
    }
  uses {
    interface Timer<TMilli> as PriorityTimer;
    interface Timer<TMilli> as ElapsedTimer;
    interface Timer<TMilli>;
    interface SplitControl as RadioControl;
    interface AMSend;
    interface Receive;
    interface LEDController;
    interface LCDSetter;
  }
}
implementation
{
//////////////////////////////  Structs
    typedef nx_struct{
        nx_uint8_t isRolePhase;
        nx_uint16_t priority;
    } priority_t;

    typedef nx_struct{
        nx_uint8_t isRolePhase;
        nx_uint16_t temp;
        nx_uint16_t humid;
        nx_uint16_t ur;
        nx_uint16_t version;
    } sensor_data_t;
//////////////////////////////  Globals

    typedef enum {TEMP, HUMID, UR, Priority} TYPE;
    typedef enum {RX,TX} ROLE;
    
    uint8_t deviceRole;
    uint8_t isRolePhase = 1;
    message_t output;
    nx_uint16_t devicePriority;

    sensor_data_t currentData;
////////////////////////////// Function prototype
    task void start();

    task void setPriority();
    task void sendPriority();
    void priorityReceived(void *payload);

    task void sendDataTask();
    void dataReceived(void *payload);
////////////////////////////// 

    command void ComSat.init(){
        priority_t* data = (priority_t*) call AMSend.getPayload(&output);
        isRolePhase = 1;
        data->isRolePhase = 1;
        call ElapsedTimer.startOneShot(10000);
        post start();
    }
    event void ElapsedTimer.fired(){} // do nothing
    task void start(){
        if(call RadioControl.start() != SUCCESS);
        post start(); // restarts task
    }

    event void RadioControl.startDone(error_t error) {
 //       call LEDController.BlinkLed0();
//        call LEDController.BlinkLed2();
        post setPriority();
    }

    event void RadioControl.stopDone(error_t error) {
    }
//////Role Routine
    task void setPriority(){
        priority_t* data;
        if(isRolePhase == 0 ) return;

        devicePriority = (nx_uint16_t)(call PriorityTimer.getNow());
        data = (priority_t*) call AMSend.getPayload(&output);
        memcpy(&(data->priority), &devicePriority, sizeof(uint16_t));
        post sendPriority();
    }
    task void sendPriority(){
        if(isRolePhase == 0 ) return;
        
        call LCDSetter.setLCD(Priority, devicePriority, 0, 0);
        call PriorityTimer.startOneShot(3000);
//        call LEDController.BlinkLed1();
        if(call AMSend.send(AM_BROADCAST_ADDR, &output, sizeof(priority_t) != SUCCESS))
            post setPriority();
    }
    event void PriorityTimer.fired(){
        priority_t* data = (priority_t*) call AMSend.getPayload(&output);
        if(data->isRolePhase){
            post setPriority();
            call PriorityTimer.startOneShot(3000);
            
        }
    }
    //TX
    command void ComSat.sendData(void* pData){
        sensor_data_t* data = (sensor_data_t*)pData;
        currentData.isRolePhase = 0;
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
        priority_t* outdata;
        devicePriority = (nx_uint16_t)(call PriorityTimer.getNow());
        if(devicePriority == data->priority){
            //우선도가 같으면 재시도한다.
            post setPriority(); // retry
            return;
        }
        if(devicePriority < data->priority)
        {
            deviceRole = TX;
        }
        else // devicePriority > data->priority
        {
            deviceRole = RX;
        }
        call LCDSetter.setLCD(Priority, 0, (uint16_t)devicePriority, (uint16_t)data->priority);
        outdata = (priority_t*) call AMSend.getPayload(&output);
        outdata->isRolePhase = 0;
        isRolePhase = 0;
        call Timer.startOneShot(3000);
    }
    event void Timer.fired(){
        signal ComSat.initDone(deviceRole);
    }
    event void LEDController.BlinkDone(){
    };
    ////////////////////RX
    void dataReceived(void *payload){
        /*sensor_data_t* data = (sensor_data_t*)payload;*/
        signal ComSat.received(payload);
    }
}