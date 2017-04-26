
interface LedController {
    command void test();

    command void setNumber(uint8_t num);

   //Morse Short
    command void morseShortLed0();
    command void morseShortLed1();
    command void morseShortLed2();
    
   //Morse Long

   command void morseLongLed0();

   //Morse Wait
   command void morseWaitLed0();

   
}