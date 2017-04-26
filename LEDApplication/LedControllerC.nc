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

  components new TimerMilliC() as CompleteTimer;
  LedControllerM.CompleteTimer -> CompleteTimer;

  components new TimerMilliC() as MorseTimer;
  LedControllerM.MorseTimer -> MorseTimer;

  // LCD
  components LCDSetterC;
  LedControllerM.LCDSetter -> LCDSetterC;
  
}