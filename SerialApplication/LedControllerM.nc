module LEDControllerM {
  provides interface LEDController;
  uses
  {
    interface Leds;
    interface Timer<TMilli> as LEDTimer0;
    interface Timer<TMilli> as LEDTimer1;
    interface Timer<TMilli> as LEDTimer2;

    interface Timer<TMilli> as LEDIntervalTimer0;
    interface Timer<TMilli> as LEDIntervalTimer1;
    interface Timer<TMilli> as LEDIntervalTimer2;
    
  }
}

implementation {
  #define MORSE_UNIT 200
  #define stdMillSec 6000
  //******Test Entry*********
  command void LEDController.test(){}
  //////////////////////Function Proto
  void led0Blink(uint16_t interval);
  void led1Blink(uint16_t interval);
  void led2Blink(uint16_t interval);

//**** IntervalBlinks
//* 주기로 깜빡인다.
//*********************************************
    uint8_t currentCount[3];
    uint16_t currentInterval[3];

//LED0 (LED1, LED2와 코드 동일)
    command void LEDController.IntervalBlinkLed0(uint16_t interval){
      if(interval == 0) interval = 1;

      currentCount[0] = interval;
      currentInterval[0] = stdMillSec / interval;
      led0Blink(currentInterval[0]);
    }
    
    void led0Blink(uint16_t interval){
      call Leds.led0On();
      call LEDIntervalTimer0.startOneShot(interval);
    }
    event void LEDIntervalTimer0.fired(){
      call Leds.led0Off();
      if(--currentCount[0] > 0){
        led0Blink(currentInterval[0]);
      }
      else{
        signal LEDController.BlinkDone();
      }
    }
///////////////////////////////////////////////
    command void LEDController.IntervalBlinkLed1(uint16_t interval){
      if(interval == 0) interval = 1;

      currentCount[1] = interval;
      currentInterval[1] = stdMillSec / interval;
      led1Blink(currentInterval[1]);
    }
    
    void led1Blink(uint16_t interval){
      call Leds.led1On();
      call LEDIntervalTimer1.startOneShot(interval);
    }
    event void LEDIntervalTimer1.fired(){
      call Leds.led0Off();
      if(--currentCount[1] > 0){
        led0Blink(currentInterval[1]);
      }
      else{
        signal LEDController.BlinkDone();
      }
    }

    command void LEDController.IntervalBlinkLed2(uint16_t interval){
      if(interval == 0) interval = 1;

      currentCount[2] = interval;
      currentInterval[2] = stdMillSec / interval;
      led2Blink(currentInterval[2]);
    }

    void led2Blink(uint16_t interval){
      call Leds.led2On();
      call LEDIntervalTimer2.startOneShot(interval);
    }
    event void LEDIntervalTimer2.fired(){
      call Leds.led0Off();
      if(--currentCount[2] > 0){
        led0Blink(currentInterval[2]);
      }
      else{
        signal LEDController.BlinkDone();
      }
    }
/////////////////////////////////////////////////////////////
//**** Digits
//* 2진수로 0~7까지의 범위를 나타낼 수 있다.
//****
////////////////////////////////////////////////////////////
  void setDigit(uint8_t mask){
    if(mask & 4) call Leds.led0On();
    else call Leds.led1Off();
    if(mask & 2) call Leds.led1On();
    else call Leds.led1Off();
    if(mask & 1) call Leds.led2On();
    else call Leds.led2Off();
  }
  void clearDigit(){
    call Leds.led0Off();
    call Leds.led1Off();
    call Leds.led2Off();
  }
////////////////////////////////////////////////////////////
//**** Blinks
//* Led0,1,2를 깜빡이게 해 준다.
//****
////////////////////////////////////////////////////////////

  command void LEDController.BlinkLed0(){
    call Leds.led0On();
    call LEDTimer0.startOneShot(MORSE_UNIT);
  }
  event void LEDTimer0.fired(){
    call Leds.led0Off();
  }
  command void LEDController.BlinkLed1(){
    call Leds.led1On();
    call LEDTimer1.startOneShot(MORSE_UNIT);
  }
  
  event void LEDTimer1.fired(){
    call Leds.led1Off();
  }

  command void LEDController.BlinkLed2(){
    call Leds.led2On();
    call LEDTimer2.startOneShot(MORSE_UNIT);
  }

  event void LEDTimer2.fired(){
    call Leds.led2Off();
  }
}  