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

configuration TempSensorC{
    provides interface TempSensor;
}
implementation
{
  components TempSensorM;

  TempSensor = TempSensorM;

  components new TimerMilliC(), new SensirionSht11C() as Sensor;
  TempSensorC.Read_Humidity -> Sensor.Humidity;
  TempSensorC.Read_Temp -> Sensor.Temperature;
}
