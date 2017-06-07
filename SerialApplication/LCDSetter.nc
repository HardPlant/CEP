interface LCDSetter{
    command void init();
    command void setLCDData(uint8_t type, uint16_t value, uint16_t avg, uint16_t stdev);
    command void setLCDDevicePriorty(uint32_t priority);
    command void setLCDReceivePacket(void* payload);
    command void setLCDSender(uint16_t temp, uint16_t humid, uint16_t ur, uint32_t priority);
    command void setLCDPayload(uint16_t temp, uint16_t humid, uint16_t ur, uint32_t priority);
    command void setLCDStatus(uint8_t stat);

}
