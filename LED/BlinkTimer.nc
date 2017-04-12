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


configuration BlinkTimer {
}

implementation {

  components MainC, BlinkTimerM, LedsC, new TimerMilliC();
  
  BlinkTimerM.Boot -> MainC;
  BlinkTimerM.Leds -> LedsC;
  BlinkTimerM.Timer->TimerMilliC;
}

