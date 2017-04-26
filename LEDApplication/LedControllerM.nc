module LedControllerM {
    provides interface LedController;
    uses
    {
      interface Leds;
      interface Timer<TMilli> as LedTimer0;
      interface Timer<TMilli> as LedTimer1;
      interface Timer<TMilli> as LedTimer2;

      interface Timer<TMilli> as MorseTimer;

      interface Timer<TMilli> as TestTimer;
      interface LCDSetter;
    }
}

implementation {
  #define MORSE_UNIT 200
//******Inner Functions******
   void setDigit(uint8_t mask);
   void doMorse(uint8_t num);
   void morseParse(const char* code);
   char* getMorseCode(uint8_t num);
   void doMorseCode(uint8_t num);
//******Morse Module*********
    uint8_t testDigit = 0;
    uint8_t testStatus = 0;
    char* testCode;
    command void LedController.test(){
      call LedController.setNumber(45);
    }

    event void TestTimer.fired()
    {
      testStatus++;
    }
   event void MorseTimer.fired()
   {

   }
  
   command void LedController.setNumber(uint8_t num){
     setDigit(num);

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
     call LedTimer0.startOneShot(MORSE_UNIT);
     while(call LedTimer0.isRunning());
   }
   void setDigit(uint8_t mask){
     if(mask & 4) call Leds.led0On();
     else call Leds.led0Off();
     if(mask & 2) call Leds.led1On();
     else call Leds.led1Off();
     if(mask & 1) call Leds.led2On();
     else call Leds.led2Off();
   }


//******Timer Events*********
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
