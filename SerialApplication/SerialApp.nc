
configuration SerialApp { }
implementation
{
  components SerialAppM, MainC;
  SerialAppM.Boot -> MainC;
  //Timer
  components new TimerMilliC();
  SerialAppM.Timer -> TimerMilliC;

  // LED
  components LEDControllerC;
  SerialAppM.LEDController -> LEDControllerC;

  // LCD
  components LCDSetterC;
  SerialAppM.LCDSetter -> LCDSetterC;

  //Temp&Humid Sensor
  components TempSensorC;
  SerialAppM.TempSensor -> TempSensorC;

  //ComSat
  components ComSatC;
  SerialAppM.ComSat -> ComSatC;

}