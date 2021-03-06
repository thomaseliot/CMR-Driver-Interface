/*
 * can_callbacks.h
 * Callbacks used by the Front Sensor Module for CAN messages.
 */ 

#ifndef CAN_CALLBACKS_H_
#define CAN_CALLBACKS_H_

#include "cmr_constants.h"
#include "frtos_can.h"

// Struct definitions
typedef struct HeartbeatFSM_t {
	NodeState currentState;
	uint8_t someData;
} HeartbeatFSM;

// Callback functions, one for each receive mailbox
void mb1_callback(CAN_packet packet);
void mb2_callback(CAN_packet packet);
void mb3_callback(CAN_packet packet);
void mb4_callback(CAN_packet packet);


#endif /* CAN_CALLBACKS_H_ */