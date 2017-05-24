interface TempSensor{
    command void init();
    command void getTemp();
    command void getHumid();
}