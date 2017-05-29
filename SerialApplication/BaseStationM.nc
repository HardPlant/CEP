/////////////*
BaseStation Module
1. Choose role between two or more machines:
  All machine do random start ->
    First starter will be TX, others will be RX
2. TX sends, RX do Nothing
3. RX receives, signal recvPacket();

# TOS dependancy, info : http://homepage.cs.uiowa.edu/~ochipara/classes/wsn/lectures/tinyos-tutorial.pdf
*nx = network type (network byte-> no endian issues)
Addresses : 
  * TOS_BCAST_ADDR : broadcast
  * TOS_NODE_ID : node own Addresses
  * am_id_t : determine sender&receiver group
  * typedef	nx_struct	message_t	{
		nx_uint8_t	header[sizeof(message_header_t)];
		nx_uint8_t	data[TOSH_DATA_LENGTH]; // data byte
		nx_uint8_t	footer[sizeof(message_footer_t)];
		nx_uint8_t	metadata[sizeof(message_metadata_t)];
  }	message_t;

  * interface SplitControl 
  interface	SplitControl	{
		command	error_t	start(); // start processing
		event	void	startDone(error_t	error); // complete	processing
		command	error_t	stop(); 
		event	void	stopDone(error_t	error);
}
 * AMSend
 interface	AMSend	{
		command	error_t	send(am_addr_t	addr,	message_t	*	msg,
				uint8_t	len);
		command	error_t	cancel(message_t	*	msg);
		event	void	sendDone(message_t	*	msg,	error_t	error);
		command	uint8_t	maxPayloadLength();
		command	void*	getPayload(message_t	*	msg,	uint8_t	len);
}
interface	Receive	{
		event	message_t*	receive(message_t	*	msg,	void	*
				payload,	uint8_t	len);
}
*Other
interface	Packet	{
		command	void	clear(message_t	*	msg);
		command	void*	getPayload(message_t	*	msg,	uint8_t	
				len);
		command	uint8_t	payloadLength(message_t	*	msg);
		command	void	setPayLoadLength(message_t	*	msg,	uint8_t
				len);
		command	uint8_t	maxPayloadLength();
}
*
interface	AMPacket	{
		command	am_addr_t	address();
		command	am_group_t	localGroup();
		command	am_addr_t	destination(message_t*	amsg);
		command	am_addr_t	source(message_t*	amsg);
		command	am_group_t	group(message_t*	amsg);
		command	bool	isForMe(message_t*	amsg);
		command	am_id_t	type(message_t*	amsg);
}
* 
*///////////
#include "AM.h"
#include "Serial.h"
#include "Oscilloscope.h"

module BaseStationM {
    provides{
        interface BaseStation;
    }
  uses {
    interface SplitControl as RadioControl; // AMC component's Radiopower contorl

    interface AMSend as RadioSend[am_id_t id];
    interface Receive as RadioReceive[am_id_t id];
    interface Packet as RadioPacket;
    interface AMPacket as RadioAMPacket;

    interface Leds;
  }
}

implementation{
  message_t output;
  task void sendDataPacket(){
    sensor_data_t* packet
      = (sensor_data_t*)call Packet.getPayload(&output, sizeof(packet_t));
    packet->temp = temp;
    ..
    if(call AMSend.send(AM_BROADCAST_ADDR, &output, sizeof(sensor_data_t)) != SUCCESS)
      post sendDataPacket();
  }
  event void AMSend.sendDone(message_t *msg, error_t err){
    if(err = SUCCESS){

    }
    else{
      post send();
    }
  }
}













/*{
    typedef enum {RX,TX} ROLE;
    uint8_t role;
    typedef nx_struct message{
        nx_uint16_t temp;
        nx_uint16_t humid;
        nx_uint16_t ur;
        nx_uint16_t version;
    } Packet;
    Packet packet;
  message_t  radioBuf;
  
  command void BaseStation.init() {
    uint8_t i;
    call RadioControl.start();
  }
  
  command uint8_t BaseStation.getDeviceRole(){
    return role;
  }
    
  event void RadioControl.stopDone(error_t error) {}
  
  event void RadioControl.startDone(error_t error) {
  }

  uint8_t count = 0;
  event message_t *RadioReceive.receive[am_id_t id](message_t *msg,
						    void *payload,
						    uint8_t len) {
    signal BaseStation.recvPacket((void*)msg);
    return msg;
  }

  command void BaseStation.sendPacket(void* msg, uint8_t len){
    am_id_t id;
    am_addr_t addr;
    len = call RadioPacket.payloadLength(msg);
    id = call RadioAMPacket.type(msg);
    addr = call RadioAMPacket.destination(msg);

    call RadioSend.send[id](addr, msg, len);
  }

  event void RadioSend.sendDone[am_id_t id](message_t* msg, error_t error) {}  
}*/