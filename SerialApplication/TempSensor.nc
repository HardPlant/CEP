interface TempSensor{
    command void start();
    event void done(uint16_t mytemp, uint16_t myhumi, uint16_t myur, uint16_t myphoto);
}

