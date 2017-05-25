interface BaseStation{
    command void init();
    event void initDone();
    command uint8_t getDeviceRole();
    command void sendPacket(void* msg, uint8_t len);
    event void recvPacket(void* msg);
}