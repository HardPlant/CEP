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
  norace nx_uint32_t LCD2value;
  norace uint8_t LCDStatus = 1;

  void SensorsPrint (uint8_t App_size);
  ////////////////Setters and Configurators.
  void LCDSW1(char SetDataBuff[]);
  void LCDSW2(char SetDataBuff[]);
  void LCDConfigure(uint8_t turn, char SetDataBuff[]);

  
  //////////////////////////////////////////////////////////
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

  event void Interaction.getSensorDataDone(App_struct_t *App_Payload, uint8_t App_size){
    if (AP_Frame.AppData.sensor.Sdata.CHA_data[0] == 0) signal LCDSetter.SW0Pressed();
    if (AP_Frame.AppData.sensor.Sdata.CHA_data[0] == 1) LCDStatus = 1;
    if (AP_Frame.AppData.sensor.Sdata.CHA_data[0] == 2) LCDStatus = 2;
  }

  event void Interaction.Urgency_Data (uint8_t *Urgency_Payload, uint8_t len) {
  }

  //////////////////////////////////////////////////////////
typedef enum {TEMP, HUMID, UR} TYPE;
typedef enum {UPPER,LOWER} TURNTYPE;
  char* getType(){
    if(LCDDisplayType == TEMP) return "TEMP";
    if(LCDDisplayType == HUMID) return "HUMID";
    if(LCDDisplayType == UR) return "URed";
  }
  event void Timer.fired(){
    char SetDataBuff[32];
    if(LCDStatus == 1) LCDSW1(SetDataBuff);
    if(LCDStatus == 2) LCDSW2(SetDataBuff);
  }

  void LCDSW1(char SetDataBuff[]){
    static uint8_t turn = UPPER;
    
    if(turn == UPPER){
      sprintf(SetDataBuff, "%5s AVG StDev ", getType());
      LCDConfigure(turn, SetDataBuff);
      turn = LOWER;
    }
    else {
      sprintf(SetDataBuff, "%4d %4d %6d", LCDvalue, LCDavg, LCDstdev);
      LCDConfigure(turn, SetDataBuff);
      turn = LOWER;
    }
  }
  void LCDSW2(char SetDataBuff[]){
    static uint8_t turn = UPPER;
    sprintf(SetDataBuff, "%9s %6d", "PRIORITY:", LCD2value);
    LCDConfigure(turn, SetDataBuff);
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

  command void LCDSetter.setLCD(uint8_t type, uint16_t value, uint16_t avg, uint16_t stdev)
  {
      LCDDisplayType=type;
      LCDvalue = value;
      LCDavg = avg;
      LCDstdev = stdev;
  }

  command void LCDSetter.setLCD2(nx_uint32_t value)
  {
      LCD2value = value;
  }
  //////////////////////////////////////////////////////////

}
