interface LCDSetter{
    command void init();
    command void setLCD(uint8_t type, uint16_t value, uint16_t avg, uint16_t stdev);
    command void setLCD2(nx_uint32_t value);
    command void setLCD3(uint32_t priority, uint16_t* readings);

}