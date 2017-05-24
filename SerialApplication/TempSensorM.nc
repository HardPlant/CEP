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
//#define GET_HUMIDITY_DATA 0	// 온도를 구하는데 습도가 필요하므로, 분리 효율이 떨어진다.

module TempSensorM
{
  provides{
    interface TempSensor;
  }
  uses {
	interface Read<uint16_t> as Read_Humidity;
	interface Read<uint16_t> as Read_Temp;
  }
}
implementation
{
  void calc_SHT11(uint16_t p_humidity ,uint16_t p_temperature);
  
  uint16_t myhumi,mytemp;
  uint16_t T_temp,T_humi;

  // Use LEDs to report various status issues.
  command void TempSensor.start() {
	  while (call Read_Temp.read() != SUCCESS);
  }


  event void Read_Temp.readDone(error_t result, uint16_t data) {
    if (result == SUCCESS)
    {
      atomic T_temp = data;
      call Read_Humidity.read();
    }
    else
    {
      call Read_Temp.read();
    }
  }

  event void Read_Humidity.readDone(error_t result, uint16_t data) {
	if (result == SUCCESS)
	{
		atomic T_humi = data;
		calc_SHT11(T_humi, T_temp);
		signal TempSensor.done(mytemp, myhumi);
	}
	else
	{
		call Read_Temp.read();
	}
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