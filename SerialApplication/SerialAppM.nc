
#include "AM.h"
module SerialAppM {
  uses {
	interface Boot;
  
  interface Timer<TMilli> as Timer;
    interface Timer<TMilli> as ElapsedTimer;
    interface SplitControl as RadioControl;
    interface AMSend as RadioSend;
    interface Receive as RadioReceive;

  interface LEDController;
  interface LCDSetter;
  interface TempSensor;

  }
}
implementation {
    #include "sensor.h"

////////////Globals
    sensor_data_t localData;
    sensor_data_t sendData;

    message_t output;
    uint16_t devicePriority;
    uint8_t isRunning;

    sensor_data_t currentData;
    
    sensor_data_t mock;

////////////Function primitives
    
    task void setData();
    void setValues(uint16_t newValue, uint8_t type);
    void IntervalBlink(uint8_t interval);
    void setMessage(uint16_t temp, uint16_t humid, uint16_t ur);
    
    task void start();

    task void sendDataTask();
////////////Entry

    event void Boot.booted() {
        call LCDSetter.init();

        isRunning = 1;
        call ElapsedTimer.startPeriodic(107); // 우선도 증가 주기와 센서 샘플링 주기가 서로소가 되게 하면 
        post start();                         // 우선도가 서로 달라지는 시점이 나온다.

        mock.temp = 1;
        mock.humid = 1;
        mock.ur = 1;
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
        call Timer.startOneShot(1000);
    }
    event void RadioControl.stopDone(error_t error) {
    }
    
    event void Timer.fired(){

        call TempSensor.start();
        call Timer.startOneShot(8000);
    }

    ////TX  
    event void TempSensor.done(uint16_t temp, uint16_t humid, uint16_t ur){
        /*
        sendData.temp = temp;
        sendData.humid = humid;
        sendData.ur = ur; */
        
        localData.temp = temp;
        localData.humid = humid;
        localData.ur = ur;
        post setData();

        //post sendDataTask();
    }

    task void sendDataTask(){
        memcpy(call RadioSend.getPayload(&output), &sendData, sizeof(sensor_data_t));
        call LCDSetter.setLCD(SEND,sendData.temp, sendData.humid, sendData.ur);

        if(call RadioSend.send(AM_BROADCAST_ADDR, &output, sizeof(sensor_data_t) != SUCCESS))
            post sendDataTask();
    }
    
    event void RadioSend.sendDone(message_t *msg, error_t err) {}

    ////RX

    event message_t* RadioReceive.receive(message_t *msg, void *payload, uint8_t len){
/*
        uint16_t datas[3];
        uint16_t packetPriority;

        sensor_data_t* pkt = payload;
        localData.temp = pkt->temp;
        localData.humid = pkt->humid;
        localData.ur = pkt->ur;
        packetPriority = pkt->priority;
        
        
        datas[0] = pkt->temp;
        datas[1] = pkt->humid;
        datas[2] = pkt->ur;
        
        call LCDSetter.setLCD3(packetPriority, datas);
        if(devicePriority >= packetPriority)
            return msg;

        if(isRunning){
            isRunning = 0;
            call ElapsedTimer.stop();
        }

        call LCDSetter.setLCD(RECEIVE,datas[0], datas[1], datas[2]);
*/
        return msg;
    }

    task void setData(){
        uint16_t temp = localData.temp; //묵시적 ntoul32
        uint16_t humid = localData.humid;
        uint16_t ur = localData.ur;
        setMessage(temp, humid, ur);
    }

    event void LEDController.BlinkDone(){
    }

    ////RX Set Data
    
    uint8_t con_i[3] = {0,};
    float ret_avg[3] = {0,};
    float ret_std[3] = {0,};
    float m2[3] = {0,};
    uint8_t turn;

    void setMessage(uint16_t temp, uint16_t humid, uint16_t ur){
        setValues(temp,TEMP);
        setValues(humid,HUMID);
        setValues(ur,UR);

        if(turn == TEMP){
            IntervalBlink(temp - ret_avg[turn]);
            call LCDSetter.setLCD(turn,temp, ret_avg[turn],ret_std[turn]);
            turn = HUMID;
        }
        else if(turn == HUMID){
            IntervalBlink(humid - ret_avg[turn]);
           call LCDSetter.setLCD(turn,humid, ret_avg[turn],ret_std[turn]);
            turn = UR;
        }            
        else if(turn == UR){
            IntervalBlink(ur - ret_avg[turn]);
              call LCDSetter.setLCD(turn,ur, ret_avg[turn],ret_std[turn]);
            turn = TEMP;
        }
    }

    void setValues(uint16_t newValue, uint8_t type){
        float delta = 0;
        float delta2 = 0;
        
        delta = newValue - ret_avg[type];
        con_i[type]++;

        ret_avg[type] += delta / con_i[type];
        if(con_i[type] == 1){ } //continues
        else {
            // Welford's algorithm
            delta2 = newValue - ret_avg[type];
            m2[type] += delta * delta2;
            ret_std[type] = sqrt(m2[type]/(con_i[type]-1));
        }
    }
   
    void IntervalBlink(uint8_t interval){
        if(turn == TEMP)       call LEDController.IntervalBlinkLed0(interval);
        else if(turn == HUMID) call LEDController.IntervalBlinkLed1(interval);
        else if(turn == UR)    call LEDController.IntervalBlinkLed2(interval);
    } 
}



    ////////////////////TX

    ////////////////////RX


