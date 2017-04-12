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

module BlinkTimerM {
  uses {
	interface Boot;
	interface Timer<TMilli>;
	interface Leds;
  interface Interaction;
  }
}
implementation {
  nx_uint8_t LedToggler;
  nx_uint8_t time;

  event void Boot.booted() {
	call Timer.startPeriodic(1000);

  }
  task void setLCDData(int number)
  {
    Cmd_struct_t CMD_Frame;
    char SetDataBuff[32];

    CMD_Frame.CMDType = PACKET_CONTROL;
    CMD_Frame.CMD_Data.OptConfig.packetType = PACKET_CONTROL;
    CMD_Frame.CMD_Data.OptConfig.optType = OPT_TEXTLCD;
  	CMD_Frame.CMD_Data.OptConfig.subCmd1 = LCDLine1;

    sprintf(SetDataBuff, "         %d      ", number);
    memcpy(CMD_Frame.CMD_Data.OptConfig.ConfigData.GeneralData, SetDataBuff, 16);

    call Interaction.Process_CMD((void*)&CMD_Frame, sizeof(Cmd_struct_t));
    return;
  }
  event void Timer.fired()  {

      time++;
      LedToggler = 0;
      if(time % 3 == 0)
      {
        call Leds.led0On();
      }
      if(time % 4 ==0) call Leds.led0Off();
      if(time % 5 == 0)
      {
        call Leds.led1On();
      }
      if(time % 6 ==0) call Leds.led1Off();
      if(time % 9 == 0)
      {
        call Leds.led2On();
      }
      if(time % 10 ==0) call Leds.led2Off();
      call setLCDData(time);
  }
}