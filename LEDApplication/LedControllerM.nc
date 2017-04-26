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
//******Inner Functions******
   void setDigit(uint8_t mask);
   void doMorse(uint8_t num);
   void morseParse(const char* code);
   char* getMorseCode(uint8_t num);
//******Morse Module*********

   command void LedController.setMorse(uint8_t num){
     while(!(call LedTimer0.isRunning()
            &&call LedTimer1.isRunning()    
            &&call LedTimer2.isRunning())); // wait until All timer ends
     doMorse(num);
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
   }
   void setDigit(uint8_t mask){
     if(mask & 2) call Leds.led1On();
     else call Leds.led1Off();
     if(mask & 1) call Leds.led2On();
     else call Leds.led2Off();
   }
   char* getMorseCode(uint8_t num){
      if(num==0) return	"----- "; //0
      if(num==1) return	".---- "; //1
	    if(num==2) return "..--- "; //2
	    if(num==3) return "...-- "; //3
	    if(num==4) return "....- "; //4
	    if(num==5) return "..... "; //5
	    if(num==6) return "-.... "; //6
	    if(num==7) return "--... "; //7
	    if(num==8) return "---.. "; //8
	    return "----. "; //9
   }
   void morseParse(const char* code){
	  const char* codeParser = code;
    for (codeParser; *codeParser != '\0'; codeParser++)
		{
			if (*codeParser == '.') call LedController.morseShortLed0();
			if (*codeParser == '-') call LedController.morseLongLed0();
			if (*codeParser == ' ') call LedController.morseWaitLed0();
		}
   }
   void doMorse(uint8_t num){
     static uint8_t digit = 0;
     if(num<0) return;
     if(num>10){
       digit++;
       return doMorse(num/10);
     };
     setDigit(digit);
     digit--;
     morseParse(getMorseCode(num));
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