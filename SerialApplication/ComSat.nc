interface ComSat{
    command void init();
    event void initDone();
    command void sendData(void* payload);
    event void received(void* payload);
}
