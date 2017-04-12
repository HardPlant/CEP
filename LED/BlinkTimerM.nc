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

module BlinkTimerM {
  uses {
	interface Boot;
	interface Timer<TMilli>;
	interface Leds;
  }
}
implementation {
  struct bitfield{ // char = 1Byte = 8bit
    unsigend char time:5; // 6bit : 0~127 // LCD of 3,5,9 : 45
    unsigned char isRedToggled:1;
    unsigned char isBlueToggled:1;
    unsigned char isGreenToggled:1;
  };
  struct bitfield LEDController;

  event void Boot.booted() {
	call Timer.startPeriodic(1000);
  }
   
  event void Timer.fired()  {
    if(LEDController.isRedToggled
      |LEDController.isBlueToggled
      |LEDController.isGreendToggled)
      {
        
      }
    else
    {
      LEDController.time++;
      isRedToggled = 0;
      isBlueToggled = 0;
      isGreenToggled = 0;
      if(LEDController.time % 3 == 0)
      {
        call Leds.led0Toggle()
        isRedToggled = 1;
      };
      if(LEDController.time % 5 == 0)
      {
        call Leds.led1Toggle()
        isBlueToggled = 1;
      };
      if(LEDController.time % 9 == 0)
      {
        call Leds.led2Toggle()
        isGreenToggled = 1;
      };
    }
  }
  
}


