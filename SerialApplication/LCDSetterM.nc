
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
  void LCDShowPayload();
  void LCDShowSend();
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
  norace uint16_t LCDDevicePriority;
  norace uint16_t LCDcounterpartpriority;
  norace uint16_t LCDreadings[3];
  norace uint16_t LCDPayloadData[3];
  norace uint16_t LCDPayloadPriority;
  norace uint16_t LCDSendData[3];
  norace uint16_t LCDSendPriority;
  
  command void LCDSetter.setLCDData(uint8_t type, uint16_t value, uint16_t avg, uint16_t stdev)
  {//Show sensor_data
      if(LCDStatus == 0) LCDStatus = 1;
      LCDDisplayType=type;
      LCDvalue = value;
      LCDavg = avg;
      LCDstdev = stdev;
  }

  command void LCDSetter.setLCDDevicePriorty(uint16_t value)
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
    command void LCDSetter.setLCDPayload(uint16_t temp, uint16_t humid, uint16_t ur, uint16_t priority){
    LCDPayloadData[0] = temp;
    LCDPayloadData[1] = humid;
    LCDPayloadData[2] = ur;
    LCDPayloadPriority = priority;
  }
    command void LCDSetter.setLCDSender(uint16_t temp, uint16_t humid, uint16_t ur, uint16_t priority){
    LCDSendData[0] = temp;
    LCDSendData[1] = humid;
    LCDSendData[2] = ur;
    LCDSendPriority = priority;
  }
  //////////////////////////////////////////////////////////

/////////////////////LCD Button Events////////////////////
  event void Interaction.getSensorDataDone(App_struct_t *App_Payload, uint8_t App_size){
    if (AP_Frame.AppData.sensor.Sdata.CHA_data[0] == 1){
      if (LCDStatus == 1) LCDStatus = 3;
        else if (LCDStatus == 3) LCDStatus = 1;
      }
      
    if (AP_Frame.AppData.sensor.Sdata.CHA_data[0] == 3){
        if (LCDStatus == 1) LCDStatus = 4; // ShowPayload
        else if (LCDStatus == 4) LCDStatus = 1;
    }
    if (AP_Frame.AppData.sensor.Sdata.CHA_data[0] == 4){
        if (LCDStatus == 1) LCDStatus = 5; // ShowSend
        else if (LCDStatus == 5) LCDStatus = 1;
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
    if(LCDStatus == 4) LCDShowPayload();
    if(LCDStatus == 5) LCDShowSend();
  }
  void LCDShowAdjust(){
    char SetDataBuff[32];
    static uint8_t turn = UPPER;
    nx_uint16_t data1;
    nx_uint16_t data2;
    uint16_t d1 = 12;
    uint16_t d2 = 1234;
    memcpy(&data1,&d1,sizeof(uint16_t));
    memcpy(&data2,&d2,sizeof(uint16_t));
    
    if(turn == UPPER){
      sprintf(SetDataBuff, "FINDING OTHERS ");
      sprintf(SetDataBuff, "%8u %8u ", ntohs(data2), ntohs(data1));
      LCDConfigure(turn, SetDataBuff);turn = LOWER;
    }
    else {
      sprintf(SetDataBuff, "%8u %8u ",d2, d1);
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
      sprintf(SetDataBuff, "%9s %6u", "PRIORITY:", LCDDevicePriority);
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
      sprintf(SetDataBuff, "%3u %3u %3u %3u",
      ntohs(LCDcounterpartpriority),ntohs(LCDreadings[0]),ntohs(LCDreadings[1]),ntohs(LCDreadings[2]));
      LCDConfigure(turn, SetDataBuff);
      turn = LOWER; 
    }
    else {
      sprintf(SetDataBuff, "%3u %3u %3u %3u",
      LCDcounterpartpriority,LCDreadings[0],LCDreadings[1],LCDreadings[2]);
      LCDConfigure(turn, SetDataBuff);
      turn = UPPER;
    }
  }
  void LCDShowPayload(){
    char SetDataBuff[32];
    static uint8_t turn = UPPER;
    

    if(turn == UPPER){
      sprintf(SetDataBuff, "%2u %2u %2u %4u",
      LCDPayloadData[0],LCDPayloadData[1],LCDPayloadData[2],LCDPayloadPriority );
      LCDConfigure(turn, SetDataBuff);
      turn = LOWER; 
    }
    else {
      sprintf(SetDataBuff, "%2u %2u %2u %4u",
      ntohs(LCDPayloadData[0]),ntohs(LCDPayloadData[1]),ntohs(LCDPayloadData[2]),LCDPayloadPriority);
      LCDConfigure(turn, SetDataBuff);
      turn = UPPER;
    }
  }
    void LCDShowSend(){
    char SetDataBuff[32];
    static uint8_t turn = UPPER;
    

    if(turn == UPPER){
      sprintf(SetDataBuff, "%2u %2u %2u %4u",
      LCDSendData[0],LCDSendData[1],LCDSendData[2],LCDSendPriority );
      LCDConfigure(turn, SetDataBuff);
      turn = LOWER; 
    }
    else {
      sprintf(SetDataBuff, "%2u %2u %2u %4u",
      ntohs(LCDSendData[0]),ntohs(LCDSendData[1]),ntohs(LCDSendData[2]),LCDSendPriority);
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

