configuration ComSatC {
    provides interface ComSat;
}
implementation {
  components ComSatM;
  ComSat = ComSatM;

  components ActiveMessageC as Radio;
  ComSatM.RadioControl -> Radio;
  ComSatM.RadioSend -> Radio.AMSend[0x97]; // Oscilloscope.h에 정의
  ComSatM.RadioReceive -> Radio.Receive[0x97]; //

  
  //Timer
  components new TimerMilliC();
  ComSatM.ElapsedTimer -> TimerMilliC;
  
  // LCD
  components LCDSetterC;
  ComSatM.LCDSetter -> LCDSetterC;

}