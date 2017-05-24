
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
  //UltraRed Sensor
  components URSensorC;
  SerialAppM.URSensor -> URSensorC;

  //BaseStation
  components BaseStation;
  SerialAppM.BaseStation -> BaseStationC;*/
 
}
