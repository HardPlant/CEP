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

  event void Boot.booted() {
	call Timer.startPeriodic(1000);
  }
   
  event void Timer.fired()  {
    call Leds.led0Toggle(); //red led toggle
    
  }
  
}


