
configuration SerialApp { }
implementation
{
  components SerialAppM, MainC;
  SerialAppM.Boot -> MainC;
  //Timer
  components new TimerMilliC() as Timer;
  SerialAppM.Timer -> Timer;

  // LED
  components LEDControllerC;
  SerialAppM.LEDController -> LEDControllerC;

  // LCD
  components LCDSetterC;
  SerialAppM.LCDSetter -> LCDSetterC;

  //Temp&Humid Sensor
  components TempSensorC;
  SerialAppM.TempSensor -> TempSensorC;
/*
  //ComSat
  components ComSatC;
  SerialAppM.ComSat -> ComSatC;
*/
  //Radio
  components ActiveMessageC as Radio;
  SerialAppM.RadioControl -> Radio;

  //Sender&Receive
  components new AMSenderC(AM_SENSING_ID), new AMReceiverC(AM_SENSING_ID);
  SerialAppM.RadioSend -> AMSenderC; // Oscilloscope.h에 정의
  SerialAppM.RadioReceive -> AMReceiverC; //
}

