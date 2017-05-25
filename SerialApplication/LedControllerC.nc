configuration LedControllerC {
    provides interface LedController;
} implementation {

  components LedControllerM;

  LedController = LedControllerM;

  components LedsC;
  LedControllerM.Leds -> LedsC;

  components new TimerMilliC() as LedTimer1,new TimerMilliC() as LedTimer2 ,new TimerMilliC() as LedTimer0;
  LedControllerM.LedTimer0 -> LedTimer0;
  LedControllerM.LedTimer1 -> LedTimer1;
  LedControllerM.LedTimer2 -> LedTimer2;

  components new TimerMilliC() as IntervalTimer1,new TimerMilliC() as IntervalTimer2 ,new TimerMilliC() as IntervalTimer0;
  LedControllerM.LedIntervalTimer0 -> IntervalTimer0;
  LedControllerM.LedIntervalTimer1 -> IntervalTimer1;
  LedControllerM.LedIntervalTimer2 -> IntervalTimer2;
  
}
