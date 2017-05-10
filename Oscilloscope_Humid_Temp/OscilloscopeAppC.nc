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

configuration OscilloscopeAppC { }
implementation
{
  components OscilloscopeC, MainC, LedsC,
    new TimerMilliC(), new SensirionSht11C() as Sensor,
    SerialActiveMessageC as Comm;

  OscilloscopeC.Boot -> MainC;
  OscilloscopeC.Timer -> TimerMilliC;
  OscilloscopeC.Read_Humidity -> Sensor.Humidity;
  OscilloscopeC.Read_Temp -> Sensor.Temperature;
  OscilloscopeC.Leds -> LedsC;
  
  OscilloscopeC.SerialControl -> Comm;
  OscilloscopeC.AMSend  -> Comm.AMSend[AM_OSCILLOSCOPE];
  OscilloscopeC.Receive -> Comm.Receive[AM_OSCILLOSCOPE];
 
}
