module LedControllerM {
  provides interface LedController;
  uses
  {
    interface Leds;
    interface Timer<TMilli> as LedTimer0;
    interface Timer<TMilli> as LedTimer1;
    interface Timer<TMilli> as LedTimer2;

    interface Timer<TMilli> as LedIntervalTimer0;
    interface Timer<TMilli> as LedIntervalTimer1;
    interface Timer<TMilli> as LedIntervalTimer2;
  }
}

implementation {
  #define MORSE_UNIT 200
  #define maxCount 4 // Must be even number because of implementation
  #define stdMillSec 1000

  //******Test Entry*********
  command void LedController.test(){}
  
//**** Blinks
//* Led0,1,2를 깜빡이게 해 준다.
//****
  command void LedController.BlinkLed0(){
    call Leds.led0On();
    call LedTimer0.startOneShot(MORSE_UNIT);
  }
  command void LedController.BlinkLed1(){
    call Leds.led1On();
    call LedTimer1.startOneShot(MORSE_UNIT);
  }
  command void LedController.BlinkLed2(){
    call Leds.led2On();
    call LedTimer2.startOneShot(MORSE_UNIT);
  }
//**** IntervalBlinks
//* 주기로 깜빡인다.
//****
uint8_t currentCount[3];
uint8_t currentInterval[3];
    command void LedController.IntervalBlinkLed0(uint8_t interval){
      if(interval == 0) interval = 1;

      currentCount[0] = maxCount;
      currentInterval[0] = stdMillSec/interval;
      call LedIntervalTimer0.startOneShot(currentInterval[0]);
    }
    command void LedController.IntervalBlinkLed1(uint8_t interval){
      if(interval == 0) interval = 1;

      currentCount[1] = maxCount;
      currentInterval[1] = stdMillSec/interval;
      call LedIntervalTimer1.startOneShot(currentInterval[1]);
    }
    command void LedController.IntervalBlinkLed2(uint8_t interval){
      if(interval == 0) interval = 1;

      currentCount[2] = maxCount;
      currentInterval[2] = stdMillSec/interval;
      call LedIntervalTimer2.startOneShot(currentInterval[2]);
    }
    task void led0Blink(){
      call Leds.led0Toggle();
      if(currentCount[0]-- > 0 ){
        call LedIntervalTimer0.startOneShot(currentInterval[0]);
      }
      else
      {
        call Leds.led0Off();
        signal LedController.BlinkDone();
      }
    }

    task void led1Blink(){
      call Leds.led1Toggle();
      if(currentCount[1]-- > 0 ){
        call Leds.led1Toggle();
        call LedIntervalTimer1.startOneShot(currentInterval[1]);
      }
      else
      {
        call Leds.led1Off();
        signal LedController.BlinkDone();
      }
    }
    
    task void led2Blink(){
      call Leds.led2Toggle();
      if(currentCount[2]-- > 0 ){
        call LedIntervalTimer2.startOneShot(currentInterval[2]);
      }
      else
      {
        call Leds.led2Off();
        signal LedController.BlinkDone();
      }
    }
    
//**** Digits
//* 2진수로 0~7까지의 범위를 나타낼 수 있다.
//****
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
  
//**** LedTimer Events
//* LedTimer 이벤트이다.
//****
  event void LedTimer0.fired(){
    call Leds.led0Off();
  }
  event void LedTimer1.fired(){
    call Leds.led1Off();
  }
  event void LedTimer2.fired(){
    call Leds.led2Off();
  }  

//**** LedTimer Events
//* LedTimer 이벤트이다.
//****
  event void LedIntervalTimer0.fired(){
    post led0Blink();
  }
  event void LedIntervalTimer1.fired(){
    post led1Blink();
  }
  event void LedIntervalTimer2.fired(){
    post led2Blink();
  }
}
