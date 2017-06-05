configuration ComSatC {
    provides interface ComSat;
}
implementation {
  components ComSatM;
  ComSat = ComSatM;

  
  //Timer
  components new TimerMilliC();
  ComSatM.ElapsedTimer -> TimerMilliC;
  
  // LCD
  components LCDSetterC;
  ComSatM.LCDSetter -> LCDSetterC;

}