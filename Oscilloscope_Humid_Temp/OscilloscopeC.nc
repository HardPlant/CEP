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

#include "Timer.h"
#include <stdio.h>
#include "Oscilloscope.h"
#define GET_HUMIDITY_DATA 0	//0�̸� �µ�  1�̸� ����

module OscilloscopeC
{
  uses {
	interface Boot;
	interface SplitControl as SerialControl;
	interface AMSend;
	interface Receive;
	interface Timer<TMilli>;
	interface Read<uint16_t> as Read_Humidity;
	interface Read<uint16_t> as Read_Temp;
	interface Leds;
  }
}
implementation
{
  void calc_SHT11(uint16_t p_humidity ,uint16_t p_temperature);
  
  message_t sendbuf;
  bool sendbusy;
  
  uint16_t myhumi,mytemp;
  uint16_t T_temp,T_humi;
 
  /* Current local state - interval, version and accumulated readings */
  /*
	typedef nx_struct oscilloscope {
  nx_uint16_t version; /* Version of the interval. */
  nx_uint16_t interval; /* Samping period. */
  nx_uint16_t id; /* Mote id of sending mote. */
  nx_uint16_t count; /* The readings are samples count * NREADINGS onwards */
  nx_uint16_t readings[NREADINGS];
} oscilloscope_t;
	*/
	oscilloscope_t local;

  uint8_t reading; /* 0 to NREADINGS */

  /* When we head an Oscilloscope message, we check it's sample count. If
     it's ahead of ours, we "jump" forwards (set our count to the received
     count). However, we must then suppress our next count increment. This
     is a very simple form of "time" synchronization (for an abstract
     notion of time). 
  */
  bool suppress_count_change;

  // Use LEDs to report various status issues.
  void report_problem() { call Leds.led0Toggle(); }
  void report_sent() { call Leds.led1Toggle(); }
  void report_received() { call Leds.led2Toggle(); }

  event void Boot.booted() {
	local.interval = 1000;
	local.id = TOS_NODE_ID;
	if (call SerialControl.start() != SUCCESS)
		report_problem();
  }

  void startTimer() {
	call Timer.startPeriodic(local.interval);
	reading = 0;
  }

  event void SerialControl.startDone(error_t error) {
	startTimer();
  }

  event void SerialControl.stopDone(error_t error) {
  }

  event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len) {

	oscilloscope_t *omsg = payload;
	report_received();

	if (omsg->version > local.version)
	{
		local.version = omsg->version;
		local.interval = omsg->interval;
		startTimer();
	}

	if (omsg->count > local.count)
	{
		local.count = omsg->count;
		suppress_count_change = TRUE;
	}

	return msg;
  }

  /* At each sample period:
     - if local sample buffer is full, send accumulated samples
     - read next sample
  */
  event void Timer.fired() {
      
	if (reading == NREADINGS)
	{
		if (!sendbusy && sizeof local <= call AMSend.maxPayloadLength())
		{
			memcpy(call AMSend.getPayload(&sendbuf), &local, sizeof local);
			if (call AMSend.send(AM_BROADCAST_ADDR, &sendbuf, sizeof local) == SUCCESS)
				sendbusy = TRUE;
		}
		if (!sendbusy)
			report_problem();

		reading = 0;
		/* Part 2 of cheap "time sync": increment our count if we didn't jump ahead. */
		if (!suppress_count_change)
			local.count++;
		suppress_count_change = FALSE;
	}

	if (call Read_Temp.read() != SUCCESS)
		report_problem();
  }

  event void AMSend.sendDone(message_t* msg, error_t error) {

	if (error == SUCCESS)
		report_sent();
	else
		report_problem();

	sendbusy = FALSE;
  }

  event void Read_Temp.readDone(error_t result, uint16_t data) {

	if (result == SUCCESS)
	{
		atomic T_temp = data;
		if (call Read_Humidity.read() != SUCCESS)
			report_problem();
	
	}else{
		report_problem();
		local.readings[reading++] = 0xffff;
	}
  }

  event void Read_Humidity.readDone(error_t result, uint16_t data) {
  
	if (result == SUCCESS)
	{
		atomic T_humi = data;
		calc_SHT11(T_humi, T_temp);
			
		if(GET_HUMIDITY_DATA)
			local.readings[reading++] = myhumi;
		else
			local.readings[reading++] = mytemp;
		   
	}else{
		local.readings[reading++] = 0xffff;
		report_problem();
	}
	report_received();
  }
  
  void calc_SHT11(uint16_t p_humidity ,uint16_t p_temperature)
  //----------------------------------------------------------------------------------------
  // calculates temperature [C] and humidity [%RH]
  // input : humi [Ticks] (12 bit)
  // temp [Ticks] (14 bit)
  // output: humi [%RH]
  // temp [C]
  { 
    const float C1=-4.0; // for 12 Bit
    const float C2= 0.0405; // for 12 Bit
    const float C3=-0.0000028; // for 12 Bit
    const float T1=0.01; // for 14 Bit @ 5V
    const float T2=0.00008; // for 14 Bit @ 5V
 
    float rh_lin; // rh_lin: Humidity linear
    float rh_true; // rh_true: Temperature compensated humidity
    float t_C; // t_C : Temperature [C]
    float rh=(float)p_humidity; // rh: Humidity [Ticks] 12 Bit
    float t=(float)p_temperature; // t: Temperature [Ticks] 14 Bit
    
    t_C=t*0.01 - 40; //calc. Temperature from ticks to [C]
    rh_lin=C3*rh*rh + C2*rh + C1; //calc. Humidity from ticks to [%RH]
    rh_true=(t_C-25)*(T1+T2*rh)+rh_lin; //calc. Temperature compensated humidity [%RH]
    if(rh_true>100)rh_true=100; //cut if the value is outside of
    if(rh_true<0.1)rh_true=0.1; //the physical possible range
    mytemp=(uint16_t)t_C; //return temperature [C]
    myhumi=(uint16_t)rh_true; //return humidity[%RH]

  }


}
