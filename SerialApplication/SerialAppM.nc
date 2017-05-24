
module SerialAppM {
  uses {
	interface Boot;
  
  interface Timer<TMilli>;

  interface LedController;
  interface LCDSetter;
  interface TempSensor;
  /*

  interface URSensor;
  interface BaseStation;*/

  }
}
implementation {
    uint16_t* getValues(uint16_t newValue);

    typedef enum {TEMP, HUMID, UR} TYPE;
    uint8_t turn;

    void initC(){
        call LCDSetter.init();
        /*call URSensor.init();
        call BaseStation.init();*/

    }
    event void Boot.booted() {
        initC();
        turn = TEMP;
        call LedController.BlinkLed0();
        call LedController.BlinkLed1();
        call LedController.BlinkLed2();
        call Timer.startPeriodic(1000);
    }

    event void Timer.fired(){
        call LedController.BlinkLed0();
        call TempSensor.start();
    }
    event void TempSensor.done(uint16_t temp, uint16_t humid, uint16_t ur){
        atomic{ // getValues 호출부터 setLCD까지 배열의 값이 바뀌지 않아야 함.
            if(turn == TEMP){
                uint16_t* values = getValues(temp);//결과 배열 = 포인터
                call LCDSetter.setLCD(turn,values[0],values[1],values[2]);
                turn = HUMID;
            }
            if(turn == HUMID){
                uint16_t* values = getValues(humid);//결과 배열 = 포인터
                call LCDSetter.setLCD(turn,values[0],values[1],values[2]);
                turn = UR;
            }            
            if(turn == UR){
                uint16_t* values = getValues(ur);//결과 배열 = 포인터
                call LCDSetter.setLCD(turn,values[0],values[1],values[2]);
                turn = TEMP;
            }
        }
    }

    uint16_t* getValues(uint16_t newValue){
        static uint8_t con_i[3] = {0,};
        static float ret_avg[3] = {0,};
        static float ret_std[3] = {0,};
        static float m2[3] = {0,};
        uint16_t values[3] = {0,};
        
        float delta = 0;
        float delta2 = 0;
        
        
        delta = newValue - ret_avg[turn];
        con_i[turn]++;

        ret_avg[turn] += delta / con_i[turn];
        if(con_i[turn] == 1){ } //continues
        else {
            // Welford's algorithm
            delta2 = newValue - ret_avg[turn];
            m2[turn] += delta * delta2;
            ret_std[turn] = sqrt(m2[turn]/(con_i[turn]-1));
        }
        
        values[0] = newValue;
        values[1] = (uint16_t)ret_avg[turn];
        values[2] = (uint16_t)ret_std[turn];

        return values;
    }
}
