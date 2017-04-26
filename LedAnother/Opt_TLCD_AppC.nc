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

includes Opt_App;

configuration Opt_TLCD_AppC {}
implementation {
  components MainC, Opt_TLCD_AppM as Opt_AppM, LedsC, new TimerMilliC();

  Opt_AppM.Boot  -> MainC;
  Opt_AppM.Leds  -> LedsC;
  Opt_AppM.Timer -> TimerMilliC;

  // Interaction Components
  components InteractionC;
  Opt_AppM.Interaction -> InteractionC;

  components SCSuartDBGC;
  Opt_AppM.SCSuartDBGstd -> SCSuartDBGC;
  Opt_AppM.SCSuartDBG -> SCSuartDBGC;

  components LCDController;
}
