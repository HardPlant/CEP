module LedsP{
    provides {
        interface LedBlink;
    }
    uses {
        interface Leds;
        interface Timer<TMilli> as Timer1;
        interface Timer<TMilli> as Timer2;
    }
}

implementation{
  nx_uint8_t LedToggler;
  nx_uint8_t time;
    
  async command void LedBlink.start(){
	call Timer2.startPeriodic(500);
	call Timer1.startPeriodic(1000);
  }
  
  event void Timer1.fired()  {
      time++;
      LedToggler = 0;
      if(time % 3 == 0)
      {
        call Leds.led0On();
      }
      if(time % 5 == 0)
      {
        call Leds.led1On();
      }
      if(time % 9 == 0)
      {
        call Leds.led2On();
      }
  }
  event void Timer2.fired(){
      call Leds.led0Off();
      call Leds.led1Off();
      call Leds.led2Off();
  }
}