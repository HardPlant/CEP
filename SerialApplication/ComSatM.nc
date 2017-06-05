
#include "AM.h"
module ComSatM
{
    provides{
        interface ComSat;
    }
  uses {
    interface Timer<TMilli> as ElapsedTimer;
    interface SplitControl as RadioControl;
    interface AMSend as RadioSend;
    interface Receive as RadioReceive;

    interface LCDSetter;
  }
}
implementation
{
//////////////////////////////  Custom Types
    #include "sensor.h"
//////////////////////////////  Globals
    
////////////////////////////// Function prototype
////////////////////////////// 

    command void ComSat.init(){
    }
