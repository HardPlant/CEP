
module BlinkAppM {
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
    enum TYPE = {TEMP, HUMID, UR};
    uint8_t turn;

    void initC(){
        call TempSensor.init();
        call LCDSetter.init();
        /*call URSensor.init();
        call BaseStation.init();*/

    }
    event void Boot.booted() {
        initC();
        call Timer.startPeriodic(1000);
    }

    event void Timer.fired(){
    }
    event void TempSensor.Done(uint16_t temp, uint16_t humid){
        atomic{ // getValues 호출부터 setLCD까지 배열의 값이 바뀌지 않아야 함.
            if(turn == TEMP){
                float* values = getValues(temp);//결과 배열 = 포인터
                call LCDSetter.setLCD(turn,values[0],values[1],values[2]);
                turn = HUMID;
            }
            if(turn == HUMID){
                float* values = getValues(humid);//결과 배열 = 포인터
                call LCDSetter.setLCD(turn,values[0],values[1],values[2]);
                turn = UR;
            }
        }
    }

    float* getValues(uint16_t newValue){
        static uint8_t con_i = 0;
        static float ret_avg = 0;
        static float ret_std = 0;
        static float delta = 0;
        static float values[3];
        delta = (float)newValue - ret_avg;
        ret_avg += delta / *con_i
        if(con_i == 0) return;
        else {
            static double m2 = 0; // Welford's algorithm
            float delta2 = (float)newValue - ret_avg;
            m2 += delta * delta2;
            ret_std = sqrt(m2/(con_i)-1);
        }
        values[0] = (float)newValue;
        values[1] = ret_avg;
        values[2] = ret_std;

        return values;
}