module LedControllerM {
    provides interface LedController;
    uses
    {
      interface Leds;
      interface Timer<TMilli> as LedTimer0;
      interface Timer<TMilli> as LedTimer1;
      interface Timer<TMilli> as LedTimer2;
    }
}

implementation {
  #define MORSE_UNIT 100
  

   command void LedController.setMorse(uint8_t num){
     num=0;
   }
   //Morse Short
   command void LedController.morseShortLed0(){
     call Leds.led0On();
     call LedTimer0.startOneShot(MORSE_UNIT);
   }
   command void LedController.morseShortLed1(){
    call Leds.led1On();
    call LedTimer1.startOneShot(MORSE_UNIT);
   }
   command void LedController.morseShortLed2(){
    call Leds.led2On();
    call LedTimer2.startOneShot(MORSE_UNIT);
   }
   //Morse Long
   command void LedController.morseLongLed0(){
     call Leds.led0On();
     call LedTimer0.startOneShot(MORSE_UNIT * 3);
   }
   //Morse Wait
   command void LedController.morseWaitLed0(){
     sleep(MORSE_UNIT*1);
   }
   event void LedTimer0.fired(){
     call Leds.led0Off();
   }
   event void LedTimer1.fired(){
     call Leds.led1Off();
   }
   event void LedTimer2.fired(){
     call Leds.led2Off();
   }

  
}