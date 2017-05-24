interface BaseStation{
    command void init();
    command void send(am_addr_t addr, message_t* msg, uint8_t len);
    event void recv(message_t *msg, void *payload, uint8_t len);
}