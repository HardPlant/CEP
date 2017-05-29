configuration ComSatC {
    provides interface ComSat;
}
implementation {
  components ComSatM;
  ComSat = ComSatM;

  components ActiveMessageC as Radio;

  ComSatM.RadioControl -> Radio;
  ComSatM.AMPacket ->Radio;
  ComSatM.AMSend -> Radio;
  ComSatM.Receive -> Radio.Receive;
  
}