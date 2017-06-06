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
      call LEDIntervalTimer0.startPeriodic(interval);
    }
    event void LEDIntervalTimer0.fired(){
      call LEDController.BlinkLed0();
      if(--currentCount[0] > 0){}
      else{
        call LEDIntervalTimer0.stop();
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
      call LEDIntervalTimer1.startPeriodic(interval);
    }
    event void LEDIntervalTimer1.fired(){
        call LEDController.BlinkLed1();
      if(--currentCount[1] > 0){}
      else{
        call LEDIntervalTimer1.stop();
      }
    }

    command void LEDController.IntervalBlinkLed2(uint16_t interval){
      if(interval == 0) interval = 1;

      currentCount[2] = interval;
      currentInterval[2] = stdMillSec / interval;
      led2Blink(currentInterval[2]);
    }

    void led2Blink(uint16_t interval){
      call LEDIntervalTimer2.startPeriodic(interval/2);
    }
    event void LEDIntervalTimer2.fired(){
      call LEDController.BlinkLed2();
      if(--currentCount[2] > 0){}
      else{
        call LEDIntervalTimer2.stop();
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
    call LEDTimer0.startOneShot(currentInterval[0]);
  }
  event void LEDTimer0.fired(){
    call Leds.led0Off();
  }
  command void LEDController.BlinkLed1(){
    call Leds.led1On();
    call LEDTimer1.startOneShot(currentInterval[1]);
  }
  
  event void LEDTimer1.fired(){
    call Leds.led1Off();
  }

  command void LEDController.BlinkLed2(){
    call Leds.led2On();
    call LEDTimer2.startOneShot(currentInterval[2]);
  }

  event void LEDTimer2.fired(){
    call Leds.led2Off();
  }
}  

