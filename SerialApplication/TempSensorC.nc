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

configuration TempSensorAppC { }
implementation
{
  components TempSensorC, MainC, LedsC,
    new TimerMilliC(), new SensirionSht11C() as Sensor,
    SerialActiveMessageC as Comm;

  TempSensorC.Boot -> MainC;
  TempSensorC.Timer -> TimerMilliC;
  TempSensorC.Read_Humidity -> Sensor.Humidity;
  TempSensorC.Read_Temp -> Sensor.Temperature;
  TempSensorC.Leds -> LedsC;
  
  TempSensorC.SerialControl -> Comm;
  TempSensorC.AMSend  -> Comm.AMSend[AM_TempSensor];
  TempSensorC.Receive -> Comm.Receive[AM_TempSensor];
 
}
