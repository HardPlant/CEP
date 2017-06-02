#ifndef SENSOR_H
#define SENSOR_H

    #define TRUE 1
    #define FALSE 0

    typedef enum {TEMP, HUMID, UR, SEND, RECEIVE} TYPE;
    
    typedef nx_struct{
        nx_uint16_t temp;
        nx_uint16_t humid;
        nx_uint16_t ur;
        nx_uint32_t priority;
    } sensor_data_t;

#endif