
configuration SerialApp { }
implementation
{
  components SerialAppM, MainC;
  SerialAppM.Boot -> MainC;
  //Timer
  components new TimerMilliC() as Timer, new TimerMilliC() as ElapsedTimer;
  SerialAppM.Timer -> Timer;
  SerialAppM.ElapsedTimer -> ElapsedTimer;

  // LED
  components LEDControllerC;
  SerialAppM.LEDController -> LEDControllerC;

  // LCD
  components LCDSetterC;
  SerialAppM.LCDSetter -> LCDSetterC;

  //Temp&Humid Sensor
  components TempSensorC;
  SerialAppM.TempSensor -> TempSensorC;

  //Radio
  components ActiveMessageC as Radio;
  SerialAppM.RadioControl -> Radio;
  SerialAppM.RadioSend -> Radio.AMSend[0x97]; // Oscilloscope.h에 정의
  SerialAppM.RadioReceive -> Radio.Receive[0x97]; //

}