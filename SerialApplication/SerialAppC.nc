
//////////////////////////////////////HUMID&TEMP
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

//////////////////////////////////////Sensors_Serials
configuration OscilloscopeAppC { }
implementation
{
  components OscilloscopeC, MainC,  LedsC,
    new TimerMilliC(), new PhotoSensorC() as Sensor 
   ,SerialActiveMessageC as Comm;

  OscilloscopeC.Boot -> MainC;
  OscilloscopeC.SerialControl -> Comm;
  OscilloscopeC.AMSend ->	 Comm.AMSend[AM_OSCILLOSCOPE];
  OscilloscopeC.Receive ->  Comm.Receive[AM_OSCILLOSCOPE];
  OscilloscopeC.Timer -> TimerMilliC;
  OscilloscopeC.Read -> Sensor;
  OscilloscopeC.Leds -> LedsC;

}
//////////////////////////////////////UltraSensor
configuration OscilloscopeAppC { }
implementation
{
  components OscilloscopeC, MainC, LedsC,
    new TimerMilliC(), new UltraredSensorC() as Sensor, 
    ActiveMessageC, new AMSenderC(AM_OSCILLOSCOPE), new AMReceiverC(AM_OSCILLOSCOPE);

  OscilloscopeC.Boot -> MainC;
  OscilloscopeC.RadioControl -> ActiveMessageC;
  OscilloscopeC.AMSend -> AMSenderC;
  OscilloscopeC.Receive -> AMReceiverC;
  OscilloscopeC.Timer -> TimerMilliC;
  OscilloscopeC.Read -> Sensor;
  OscilloscopeC.Leds -> LedsC;
}
/////////////////////////////////////BaseStation
configuration BaseStationC {
}
implementation {
  components MainC, BaseStationP, LedsC;
  components ActiveMessageC as Radio, SerialActiveMessageC as Serial;
  
  MainC.Boot <- BaseStationP;

  BaseStationP.RadioControl -> Radio;
  BaseStationP.SerialControl -> Serial;
  
  BaseStationP.UartSend -> Serial;
  BaseStationP.UartReceive -> Serial;
  BaseStationP.UartPacket -> Serial;
  BaseStationP.UartAMPacket -> Serial;
  
  BaseStationP.RadioSend -> Radio;
  BaseStationP.RadioReceive -> Radio.Receive;
  BaseStationP.RadioPacket -> Radio;
  BaseStationP.RadioAMPacket -> Radio;
  
  BaseStationP.Leds -> LedsC;
  
  Serial.Leds -> LedsC;
}