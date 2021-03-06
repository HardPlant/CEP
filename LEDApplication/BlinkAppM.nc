/******************************************************************************/
/*                                                                            */
/*                       Copyright (c) HANBACK ELECTRONICS                    */
/*                              All rights reserved.                          */
/*                                                                            */
/*                             http://www.hanback.com                         */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/*                                                                            */
/*============================================================================*/
/* Permission to use, copy, modify, and distribute this software and its      */
/* documentation are reserved by above authors and Hanback electronics.       */
/* The above copyright notice and authors must be described in this software. */
/*============================================================================*/
/*                                                                            */
/******************************************************************************/

module BlinkAppM {
  uses {
	interface Boot;
  interface LCDSetter;
  interface LedController;
  
  interface Timer<TMilli>;

  }
}
implementation {
  #define BASIC_TIME 1000
  #define TEST 1

  uint8_t toggles; // |0 = Red, |2 = Green, |4 = Yellow
  uint8_t time = 0;

  task void checkToggles(){
    if(time!=0 &&toggles == 7) // bitmap 111
    {
      call Timer.stop();
      call LedController.setNumber(time);
    }
    time++;
  }

  event void Boot.booted() {
    call LCDSetter.init();
    if(!TEST) // TEST
    {
    call LedController.test();
    } 
    else
    {
    call Timer.startPeriodic(BASIC_TIME);
    }
  }
  event void LedController.reset(){
    call Timer.startPeriodic(BASIC_TIME);
  }

  event void Timer.fired(){
    toggles = 0;
    if(time != 0)
    {
      if(time % 3 == 0)
      {
        toggles |= 1; // bitmap 001
        call LedController.BlinkLed0();
      }
      if(time % 5 == 0)
      {
        toggles |= 2; // bitmap 010
        call LedController.BlinkLed2();
      }
      if(time % 9 == 0)
      {
        toggles |= 4; // bitmap 100
        call LedController.BlinkLed1();
      }
    }
    call LCDSetter.setLCD(time);

    post checkToggles();
  }

}