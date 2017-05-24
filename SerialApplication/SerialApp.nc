
configuration SerialApp { }
implementation
{
  components SerialApp, MainC,

  SerialApp.Boot -> MainC;
  //Timer
  components new TimerMilliC();
  SerialApp.Timer -> TimerMilliC;

  // LED
  components LedControllerC;
  SerialApp.LedController -> LedControllerC;

  // LCD
  components LCDSetterC;
  SerialApp.LCDSetter -> LCDSetterC;

  //Temp&Humid Sensor
  components TempSensorC;
  SerialApp.TempSensor -> TempSensorC;
/*
  //UltraRed Sensor
  components URSensorC;
  SerialApp.URSensor -> URSensorC;

  //BaseStation
  components BaseStation;
  SerialApp.BaseStation -> BaseStationC;*/
 
}
