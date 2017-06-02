/******************************************************************************/
/*                                                                            */
/*                       Copyright (c) HANBACK ELECTRONICS                    */
/*                              All rights reserved.                          */
/*                                                                            */
/*                             http://www.hanback.com                         */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/*                                                                            */
/*============================================================================*/
/* Permission to use, copy, modify, and distribute this software and its      */
/* documentation are reserved by above authors and Hanback electronics.       */
/* The above copyright notice and authors must be described in this software. */
/*============================================================================*/
/*                                                                            */
/******************************************************************************/

module LCDSetterM {
    provides{
        interface LCDSetter;
    }

  uses {
    interface Timer<TMilli>;

    interface Interaction;
    interface StdControl as SCSuartDBGstd;
    interface SCSuartDBG;
  }

} implementation {

 #define MyOPT_Type OPT_TEXTLCD

  norace App_struct_t AP_Frame;
  norace uint8_t MsgBuff[64], myAppType, myOptType, LCDDisplayType;
  norace uint16_t LCDvalue, LCDavg, LCDstdev;
  norace uint32_t LCD2value;
  norace uint8_t LCDStatus = 2;
  norace uint16_t LCDpriority;
  norace uint16_t LCDreadings[3];

  void SensorsPrint (uint8_t App_size);
  ////////////////Setters and Configurators.
  void LCDSW1();
  void LCDSW2();
  void LCDSW3();
  void LCDConfigure(uint8_t turn, char SetDataBuff[]);

  
/////////////////////////////////////////Custom setLCD Functions//////////////////////////////
  command void LCDSetter.setLCD(uint8_t type, uint16_t value, uint16_t avg, uint16_t stdev)
  {
      LCDDisplayType=type;
      LCDvalue = value;
      LCDavg = avg;
      LCDstdev = stdev;
  }

  command void LCDSetter.setLCD2(uint32_t value)
  {
      LCD2value = value;
  }
  command void LCDSetter.setLCD3(uint32_t priority, uint16_t* readings){
    LCDpriority = priority;
    LCDreadings[0] = readings[0];
    LCDreadings[1] = readings[1];
    LCDreadings[2] = readings[2];
  }
  command void LCDSetter.setLCDStatus(uint8_t stat){
    LCDStatus = stat;
  }
  //////////////////////////////////////////////////////////

  /////////////////////Initiaze Routine. DO NOT EDIT HERE/////////////////////////////////////////
  task void TryToConfigure() {call Interaction.StartConfiguration (&AP_Frame);}
  task void TryToSetTimer()  {call Interaction.SetSamplingTime(Default_Sampling_Time);}
  //////////////////////////////////////////////////////////

  command void LCDSetter.init() {
    call SCSuartDBGstd.start();
    post TryToConfigure();
  }

  //////////////////////////////////////////////////////////
  event void Interaction.StartDoneConfiguration(uint8_t appType, uint8_t optType) {

    sprintf(MsgBuff, "%d myAppType:%X, myOptType:%X\r\n", TOS_NODE_ID, appType, optType);
    call SCSuartDBG.UARTSend(MsgBuff, strlen(MsgBuff));
 
    if (optType != MyOPT_Type) {
	post TryToConfigure();
	return;
    }
    

    myAppType = appType;
    myOptType = optType;

    call Timer.startPeriodic(500);
  }
  event void Interaction.Urgency_Data (uint8_t *Urgency_Payload, uint8_t len) {
  }
/////////////////////Initiaze Routine. DO NOT EDIT HERE/////////////////////////////////////////

/////////////////////LCD Button Events////////////////////
  event void Interaction.getSensorDataDone(App_struct_t *App_Payload, uint8_t App_size){
    if (AP_Frame.AppData.sensor.Sdata.CHA_data[0] == 1){
      if (LCDStatus == 1) LCDStatus = 3;
        else if (LCDStatus == 3) LCDStatus = 1;
      }

    if (AP_Frame.AppData.sensor.Sdata.CHA_data[0] == 6){
        if (LCDStatus == 1) LCDStatus = 2;
        else if (LCDStatus == 2) LCDStatus = 1;
    }
  }
/////////////////////LCD Setting Events////////////////////

typedef enum {UPPER,LOWER} TURNTYPE;

typedef enum {TEMP, HUMID, UR, SEND, RECEIVE} TYPE;
  char* getType(){
    if(LCDDisplayType == TEMP) return "TEMP";
    if(LCDDisplayType == HUMID) return "HUMID";
    if(LCDDisplayType == UR) return "URed";
    if(LCDDisplayType == SEND) return "SEND";
    if(LCDDisplayType == RECEIVE) return "RECEIVE";
  }
  event void Timer.fired(){
    if(LCDStatus == 1) LCDSW1();
    if(LCDStatus == 2) LCDSW2();
    if(LCDStatus == 3) LCDSW3();
  }
  void LCDSW1(){
    char SetDataBuff[32];
    static uint8_t turn = UPPER;
    
    if(turn == UPPER){
      sprintf(SetDataBuff, "%5s AVG StDev ", getType());
      LCDConfigure(turn, SetDataBuff);
      turn = LOWER;
    }
    else {
      sprintf(SetDataBuff, "%4u %4u %6u", LCDvalue, LCDavg, LCDstdev);
      LCDConfigure(turn, SetDataBuff);
      turn = UPPER;
    }
  }
  void LCDSW2(){
    char SetDataBuff[32];
    static uint8_t turn = UPPER;
    sprintf(SetDataBuff, "%9s %6u", "PRIORITY:", LCD2value);
    LCDConfigure(turn, SetDataBuff);
  }
  void LCDSW3(){
    char SetDataBuff[32];
    static uint8_t turn = UPPER;
    if(turn == UPPER){
      sprintf(SetDataBuff, "%16s", "RECEIVE PACKET:");
      LCDConfigure(turn, SetDataBuff);
      turn = LOWER;
    }
    else {
      sprintf(SetDataBuff, "%3u %3u %3u %3u", LCDpriority
        ,LCDreadings[0],LCDreadings[1],LCDreadings[2]);
      LCDConfigure(turn, SetDataBuff);
      turn = UPPER;
    }
  }

  /////////////////////Set LCD.
  void LCDConfigure(uint8_t turn, char SetDataBuff[]){
    Cmd_struct_t CMD_Frame;

    CMD_Frame.CMDType = PACKET_CONTROL;
    CMD_Frame.CMD_Data.OptConfig.packetType = PACKET_CONTROL;
    CMD_Frame.CMD_Data.OptConfig.optType = OPT_TEXTLCD;

    if(turn == UPPER) CMD_Frame.CMD_Data.OptConfig.subCmd1 = LCDLine1;
    if(turn == LOWER) CMD_Frame.CMD_Data.OptConfig.subCmd1 = LCDLine2;

    memcpy(CMD_Frame.CMD_Data.OptConfig.ConfigData.GeneralData, SetDataBuff, 16);

    call Interaction.Process_CMD((void*)&CMD_Frame, sizeof(Cmd_struct_t));
  }

}
