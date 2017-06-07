
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
  #include "sensor.h"
 #define MyOPT_Type OPT_TEXTLCD

  norace App_struct_t AP_Frame;
  norace uint8_t MsgBuff[64], myAppType, myOptType, LCDDisplayType;

  void SensorsPrint (uint8_t App_size);
  ////////////////Setters and Configurators.
  void LCDShowAdjust();
  void LCDShowDatas();
  void LCDShowPriority();
  void LCDShowReceivePacket();
  void LCDConfigure(uint8_t turn, char SetDataBuff[]);

  
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

/////////////////////////////////////////Custom setLCD Functions//////////////////////////////
  norace uint8_t LCDStatus;

  norace uint16_t LCDvalue, LCDavg, LCDstdev;
  norace uint32_t LCDDevicePriority;
  norace uint16_t LCDcounterpartpriority;
  norace uint16_t LCDreadings[3];
  
  command void LCDSetter.setLCDData(uint8_t type, uint16_t value, uint16_t avg, uint16_t stdev)
  {//Show sensor_data
      if(LCDStatus == 0) LCDStatus = 1;
      LCDDisplayType=type;
      LCDvalue = value;
      LCDavg = avg;
      LCDstdev = stdev;
  }

  command void LCDSetter.setLCDDevicePriorty(uint32_t value)
  {//Show priority
      LCDDevicePriority = value;
  }
  
  command void LCDSetter.setLCDReceivePacket(void* payload){
    //Show receive packet
    sensor_data_t* pkt = payload;

    LCDcounterpartpriority = pkt->priority;
    LCDreadings[0] = pkt->temp;
    LCDreadings[1] = pkt->humid;
    LCDreadings[2] = pkt->ur;
  }
  command void LCDSetter.setLCDStatus(uint8_t stat){
    LCDStatus = stat;
  }
  //////////////////////////////////////////////////////////

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

  char* getType(){
    if(LCDDisplayType == TEMP) return "TEMP";
    if(LCDDisplayType == HUMID) return "HUMID";
    if(LCDDisplayType == UR) return "URed";
    if(LCDDisplayType == SEND) return "SEND";
    if(LCDDisplayType == RECEIVE) return "RECEIVE";
  }
  event void Timer.fired(){
    if(LCDStatus == 0) LCDShowAdjust();
    if(LCDStatus == 1) LCDShowDatas();
    if(LCDStatus == 2) LCDShowPriority();
    if(LCDStatus == 3) LCDShowReceivePacket();
  }
  void LCDShowAdjust(){
    char SetDataBuff[32];
    static uint8_t turn = UPPER;
    nx_uint16_t data1;
    nx_uint32_t data2;
    uint16_t d1 = 12;
    uint32_t d2 = 1234;
    memcpy(&data1,&d1,sizeof(uint16_t));
    memcpy(&data2,&d2,sizeof(uint32_t));
    
    if(turn == UPPER){
      sprintf(SetDataBuff, "FINDING OTHERS ");
      sprintf(SetDataBuff, "%3lu %2u %3lu %2u", ntohl(data2), ntohs(data1), ntohl(d2), ntohs(d1));
      LCDConfigure(turn, SetDataBuff);turn = LOWER;
    }
    else {
      sprintf(SetDataBuff, "%3lu %2u %3lu %2u", data2,data1, d2, d1);
      LCDConfigure(turn, SetDataBuff);
      turn = UPPER;
    }
  }
  
  void LCDShowDatas(){
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
  void LCDShowPriority(){
    char SetDataBuff[32];
    static uint8_t turn = UPPER;
    if(turn == UPPER){
      sprintf(SetDataBuff, "%9s %6lu", "PRIORITY:", LCDDevicePriority);
      LCDConfigure(turn, SetDataBuff);
      turn = LOWER;
    }
    else{
      sprintf(SetDataBuff, "%9s %6u", "CPPRIORI:", LCDcounterpartpriority);
      LCDConfigure(turn, SetDataBuff);
      turn = UPPER;
    }
  }
  void LCDShowReceivePacket(){
    char SetDataBuff[32];
    static uint8_t turn = UPPER;

    if(turn == UPPER){
      sprintf(SetDataBuff, "%3lu %3u %3u %3u",
      ntohl(LCDcounterpartpriority),ntohs(LCDreadings[0]),ntohs(LCDreadings[1]),ntohs(LCDreadings[2]));
      LCDConfigure(turn, SetDataBuff);
      turn = LOWER; 
    }
    else {
      sprintf(SetDataBuff, "%3lu %3u %3u %3u",
      LCDcounterpartpriority,LCDreadings[0],LCDreadings[1],LCDreadings[2]);
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

