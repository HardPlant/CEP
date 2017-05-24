/*
 * Copyright (c) 2006 Intel Corporation
 * All rights reserved.
 *
 * This file is distributed under the terms in the attached INTEL-LICENSE     
 * file. If you do not find these files, copies can be found by writing to
 * Intel Research Berkeley, 2150 Shattuck Avenue, Suite 1300, Berkeley, CA, 
 * 94704.  Attention:  Intel License Inquiry.
 */

/**
 * Oscilloscope demo application. Uses the demo sensor - change the
 * new DemoSensorC() instantiation if you want something else.
 *
 * See README.txt file in this directory for usage instructions.
 *
 * @author David Gay
 */
configuration OscilloscopeAppC { }
implementation
{
  components OscilloscopeC, MainC,  LedsC,
    new TimerMilliC(), new PhotoSensorC() as Sensor 
   ,SerialActiveMessageC as Comm;

  OscilloscopeC.Boot -> MainC;
  OscilloscopeC.SerialControl -> Comm;
  OscilloscopeC.AMSend ->	 Comm.AMSend[AM_OSCILLOSCOPE];
  OscilloscopeC.Receive ->  Comm.Receive[AM_OSCILLOSCOPE];
  OscilloscopeC.Timer -> TimerMilliC;
  OscilloscopeC.Read -> Sensor;
  OscilloscopeC.Leds -> LedsC;

}
