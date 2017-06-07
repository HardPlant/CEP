interface ComSat{
    command void init();
    event void initDone();
    command void sendData(void* payload);
    event void received(uint16_t temp, uint16_t humid, uint16_t ur, uint16_t priority);
}
