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

module StDevM {
    provides{
        interface StDev;
    }

  uses {
  }

} implementation {
    uint8_t con_i = 0;
    float ret_avg = 0;
    float ret_std = 0;
    float delta;
    command void setStDev(float newValue){
        delta = newValue - ret_avg;
        ret_avg += delta / *con_i
        if(con_i == 0) return;
        else {
            static double m2 = 0; // Welford's algorithm
            float delta2 = newValue - ret_avg;
            m2 += delta * delta2;
            ret_std = sqrt(m2/(con_i)-1);
            
            signal stDevDone;
        }
    }
}
