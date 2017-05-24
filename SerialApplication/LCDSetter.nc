interface LCDSetter{
    command void init();
    command void setLCD(uint8_t type, float value, float avg, float stdev);
}