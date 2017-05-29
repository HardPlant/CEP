interface ComSat{
    command void init();
    command void sendData(void* data);
    event void Received(void* data);
}