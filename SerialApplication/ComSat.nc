interface ComSat{
    command void init();
    event void initDone();
    command void sendData(void* data);
    event void received(void* data);
}