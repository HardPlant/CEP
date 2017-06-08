#ifndef SENSOR_H
#define SENSOR_H

    #define TRUE 1
    #define FALSE 0

    enum {TEMP, HUMID, UR, PHOTO, SEND, RECEIVE};
    enum {
        AM_SENSING_ID = 0xde
    };
    
    typedef nx_struct{
        nx_uint16_t temp;
        nx_uint16_t humid;
        nx_uint16_t ur;
        nx_uint16_t photo;
        nx_uint16_t priority;
    } sensor_data_t;
    
uint16_t ntohs(uint16_t const net) {
    uint8_t data[4] = {};
    memcpy(&data, &net, sizeof(data));

    return ((uint16_t) data[1] << 0)
         | ((uint16_t) data[0] << 8);
}
uint32_t ntohl(uint32_t const net) {
    uint8_t data[4] = {};
    memcpy(&data, &net, sizeof(data));

    return ((uint32_t) data[3] << 0)
         | ((uint32_t) data[2] << 8)
         | ((uint32_t) data[1] << 16)
         | ((uint32_t) data[0] << 24);
}

#endif

