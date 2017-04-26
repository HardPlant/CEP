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


configuration BlinkApp {
}

implementation {

  components MainC, BlinkAppM;
  BlinkAppM.Boot -> MainC;

  // Timer
  components new TimerMilliC();
  BlinkAppM.Timer -> TimerMilliC;

  // LED
  components LedControllerC;
  BlinkAppM.LedController -> LedControllerC;

  // LCD
  components LCDSetterC;
  BlinkAppM.LCDSetter -> LCDSetterC;


}

