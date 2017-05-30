
interface LedController {
    command void test();

   //Blink
    command void BlinkLed0();
    command void BlinkLed1();
    command void BlinkLed2();
   //IntervalBlink
    command void IntervalBlinkLed0(uint16_t interval);
    command void IntervalBlinkLed1(uint16_t interval);
    command void IntervalBlinkLed2(uint16_t interval);
    event void BlinkDone();
}