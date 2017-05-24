interface BaseStation{
    command void init();
    command void sendPacket(void* msg, uint8_t len);
    event void recvPacket(void* msg);
}