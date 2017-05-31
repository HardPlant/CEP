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

  void SensorsPrint (uint8_t App_size);

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
    sprintf(MsgBuff, "TLCD SW:%d\r\n", AP_Frame.AppData.sensor.Sdata.CHA_data[0]);
    call SCSuartDBG.UARTSend(MsgBuff, strlen(MsgBuff));
  }

  event void Interaction.Urgency_Data (uint8_t *Urgency_Payload, uint8_t len) {
  }

  //////////////////////////////////////////////////////////
typedef enum {TEMP, HUMID, UR} TYPE;

  char* getType(){
    if(LCDDisplayType == TEMP) return "TEMP ";
    if(LCDDisplayType == HUMID) return "HUMID";
    if(LCDDisplayType == UR) return "URed ";
  }
  event void Timer.fired(){
    Cmd_struct_t CMD_Frame;
    char SetDataBuff[32];
    static uint8_t turn = 0;
    CMD_Frame.CMDType = PACKET_CONTROL;
    CMD_Frame.CMD_Data.OptConfig.packetType = PACKET_CONTROL;
    CMD_Frame.CMD_Data.OptConfig.optType = OPT_TEXTLCD;

    //Upper Line
    if(turn == 0)
    {
  	  CMD_Frame.CMD_Data.OptConfig.subCmd1 = LCDLine1;
      sprintf(SetDataBuff, "%s AVG StDev ", getType());
      memcpy(CMD_Frame.CMD_Data.OptConfig.ConfigData.GeneralData, SetDataBuff, 16);

      call Interaction.Process_CMD((void*)&CMD_Frame, sizeof(Cmd_struct_t));
      turn = 1;
    }
    //Lower Line
  	else{
      CMD_Frame.CMD_Data.OptConfig.subCmd1 = LCDLine2;

      sprintf(SetDataBuff, "%4d %4d %6d", LCDvalue, LCDavg, LCDstdev);
      memcpy(CMD_Frame.CMD_Data.OptConfig.ConfigData.GeneralData, SetDataBuff, 16);

      call Interaction.Process_CMD((void*)&CMD_Frame, sizeof(Cmd_struct_t));
      turn = 0;
    }
    return;
  }
  command void LCDSetter.setLCD(uint8_t type, uint16_t value, uint16_t avg, uint16_t stdev)
  {
      LCDDisplayType=type;
      LCDvalue = value;
      LCDavg = avg;
      LCDstdev = stdev;
  }
  //////////////////////////////////////////////////////////

}
