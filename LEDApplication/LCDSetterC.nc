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

configuration LCDSetterC {
    provides interface LCDSetter;
}
implementation {
  components LCDSetterM, new TimerMilliC();

  LCDSetterM.Timer -> TimerMilliC;

  LCDSetter = LCDSetterM;

  // Interaction Components
  components InteractionC;
  LCDSetterM.Interaction -> InteractionC;

  components SCSuartDBGC;
  LCDSetterM.SCSuartDBGstd -> SCSuartDBGC;
  LCDSetterM.SCSuartDBG -> SCSuartDBGC;

}
