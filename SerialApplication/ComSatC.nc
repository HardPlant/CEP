configuration ComSatC {
    provides interface ComSat;
}
implementation {
  components ComSatM;
  ComSat = ComSatM;

  // LCD
  components LCDSetterC;
  ComSatM.LCDSetter -> LCDSetterC;

  //Radio
  components ActiveMessageC as Radio;
  ComSatM.RadioControl -> Radio;

  //Sender&Receive
  components new AMSenderC(AM_SENSING_ID)
    , new AMReceiverC(AM_SENSING_ID);
  ComSatM.RadioSend -> AMSenderC; // Oscilloscope.h에 정의
  ComSatM.RadioReceive -> AMReceiverC; //
}
