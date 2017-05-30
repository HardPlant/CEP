configuration LEDControllerC {
    provides interface LEDController;
} implementation {

  components LEDControllerM;

  LEDController = LEDControllerM;

  components LedsC;
  LEDControllerM.Leds -> LedsC;

  components new TimerMilliC() as LEDTimer1,new TimerMilliC() as LEDTimer2 ,new TimerMilliC() as LEDTimer0;
  LEDControllerM.LEDTimer0 -> LEDTimer0;
  LEDControllerM.LEDTimer1 -> LEDTimer1;
  LEDControllerM.LEDTimer2 -> LEDTimer2;

  components new TimerMilliC() as IntervalTimer1,new TimerMilliC() as IntervalTimer2 ,new TimerMilliC() as IntervalTimer0;
  LEDControllerM.LEDIntervalTimer0 -> IntervalTimer0;
  LEDControllerM.LEDIntervalTimer1 -> IntervalTimer1;
  LEDControllerM.LEDIntervalTimer2 -> IntervalTimer2;
  
}
