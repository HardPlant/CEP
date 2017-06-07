interface ComSat{
    command void init();
    event void initDone();
    command void sendData(void* data);
    event void received(void* data);
    event void received2(uint16_t temp, uint16_t humid, uint16_t ur, uint16_t priority);
}
