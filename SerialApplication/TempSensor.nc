interface TempSensor{
    command void init();
    event void TempSensor.Done(uint16_t mytemp, uint16_t myhumi);
}