interface LCDSetter{
    command void init();
    command void setLCD(uint8_t type, uint16_t value, uint16_t avg, uint16_t stdev);
}