void calc_SHT11(uint16_t p_humidity ,uint16_t p_temperature);
event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len);
event void Read_Temp.readDone(error_t result, uint16_t data);
event void Read_Humidity.readDone(error_t result, uint16_t data);
