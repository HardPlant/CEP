interface ComSat{
    command void init();
    event void initDone(uint8_t type);
    command void sendData(void* data);
    event void received(void* data);
}