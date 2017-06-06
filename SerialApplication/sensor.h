#ifndef SENSOR_H
#define SENSOR_H

    #define TRUE 1
    #define FALSE 0

    enum {TEMP, HUMID, UR, SEND, RECEIVE};
    enum {
        AM_SENSING_ID = 0xde
    };
    
    typedef nx_struct{
        nx_uint16_t temp;
        nx_uint16_t humid;
        nx_uint16_t ur;
        nx_uint16_t priority;
    } sensor_data_t;

#endif

