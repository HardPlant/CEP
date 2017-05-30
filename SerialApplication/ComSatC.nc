configuration ComSatC {
    provides interface ComSat;
}
implementation {
  components ComSatM;
  ComSat = ComSatM;

  components ActiveMessageC as Comm;
  ComSatM.RadioControl -> Comm;
  ComSatM.AMSend ->Comm.AMSend[AM_OSCILLOSCOPE]; // Oscilloscope.h에 정의
  ComSatM.Receive -> Comm.Receive[AM_OSCILLOSCOPE]; //

  components RandomC;
  ComSatM.Random -> RandomC;
  
  //Timer
  components new TimerMilliC();
  ComSatM.Timer -> TimerMilliC;
}