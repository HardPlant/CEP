
interface LedController {
    command void test();

    command void setNumber(uint8_t num);

   //Blink
    command void BlinkLed0();
    command void BlinkLed1();
    command void BlinkLed2();

    //reset request
    event void reset();
   
}