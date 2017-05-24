
configuration SerialApp { }
implementation
{
  components SerialAppM, MainC;
  SerialAppM.Boot -> MainC;
  //Timer
  components new TimerMilliC();
  SerialAppM.Timer -> TimerMilliC;

  // LED
  components LedControllerC;
  SerialAppM.LedController -> LedControllerC;

  // LCD
  components LCDSetterC;
  SerialAppM.LCDSetter -> LCDSetterC;

  //Temp&Humid Sensor
  components TempSensorC;
  SerialAppM.TempSensor -> TempSensorC;
/*

  //BaseStation
  components BaseStation;
  SerialAppM.BaseStation -> BaseStationC;*/
 
}
