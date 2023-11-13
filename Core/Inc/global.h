#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "button.h"

extern int flagTimer1;
extern int status;

extern int traffic_duration[3]; //duration for each led [0: RED, 1: AMBER, 2: GREEN]
extern int traffic_state[2]; //state for each traffic light [0: 1st traffic light, 1: 2nd traffic light]
extern int traffic_curr_time[2]; //current time for traffic light
extern int traffic_time_buffer[2][2]; //buffer for 7seg led

#endif /* INC_GLOBAL_H_ */
