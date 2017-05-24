interface LCDSetter{
    command void init();
    command void LCDSetter.setLCD(uint8_t type, float value, float avg, float stdev);
}