module ComSatM
{
    provides{
        interface ComSat;
    }
  uses {
    interface SplitControl as RadioControl;
    interface AMPacket;
    interface AMSend;
    interface Receive;
  }
}
implementation
{
    #include <stdlib.h>
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
    uint16_t devicePriority;

    sensor_data_t currentData;
////////////////////////////// Function prototype
    task void start();
    task void setPriority();
    void priorityReceived(void *payload);
    void dataReceived(void *payload);
////////////////////////////// 

    command void ComSat.init(){
        post start();
    }

    task void start(){
        if(call RadioControl.start() != SUCCESS);
        post start();
    }

    event void RadioControl.startDone(error_t error) {
        post setPriority();
    }

    event void RadioControl.stopDone(error_t error) {
    }

    task void setPriority(){
        srand(time(NULL));
        uint16_t random = rand();
        devicePriority = random;
        priority_t* data
         = (priority_t*) call Packet.getPayload(&output, sizeof(priority_t));
         data->priority = random();
        if(call AMSend.send(AM_BROADCAST_ADDR, &output, sizeof(priority_t) != SUCCESS))
            post setPriority();
    }
    task void sendDataTask(){
        sensor_data_t* data
         = (sensor_data_t*) call Packet.getPayload(&output, sizeof(sensor_data_t));
        data->temp = currentData.temp;
        data->humid = currentData.humid;
        data->ur = currentData.ur;
        data->version = currentData.version;
        if(call AMSend.send(AM_BROADCAST_ADDR, &output, sizeof(sensor_data_t) != SUCCESS))
            post sendDataTask();
    }
    command void ComSat.sendData(void* pData){
        sensor_data_t* data = (sensor_data_t*)pData;
        currentData.temp = data->temp;
        currentData.humid = data->humid;
        currentData.ur = data->ur;
        currentData.version = data->version;
        post sendDataTask();
    }

    event void AMSend.sendDone(message_t *msg, error_t err) {}
    event message_t* Receive.receive(message_t *msg, void *payload, uint8_t len){
        if(isRolePhase) priorityReceived(payload);
        else dataReceived(payload);
        return msg;
    }
    void priorityReceived(void *payload){
        priority_t* data = (priority_t*)payload;
        if(devicePriority < data->priority) deviceRole = TX;
        isRolePhase = 0;
    }
    void dataReceived(void *payload){
        sensor_data_t* data = (sensor_data_t*)payload;
        signal ComSat.Received(data);
    }


}