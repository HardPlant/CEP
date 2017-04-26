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

  uint8_t toggles; // |1 = Red, |2 = Yello, |4 = Green
  uint8_t time = 0;

  task void checkToggles(){
    if(toggles == 7) //
    {call Timer.stop();
    call LedController.setNumber(time);}
  }

  event void Boot.booted() {
    if(TEST)
    {
    call LedController.test();
    }
    else
    {
    call LCDSetter.init();
    call Timer.startPeriodic(BASIC_TIME);
    }
  }

  event void Timer.fired(){
    time++;
    call LCDSetter.setLCD(time);
    toggles = 0;

    if(time % 3 == 0)
    {
      toggles |= 1; // bitmap 001
      call LedController.morseShortLed0();
    }
    if(time % 5 == 0)
    {
      toggles |= 2; // bitmap 010
      call LedController.morseShortLed2();
    }
    if(time % 9 == 0)
    {
      toggles |= 4; // bitmap 100
      call LedController.morseShortLed1();
    }
    post checkToggles();
  }

}