/*
 * global.h
 *
 *  Created on: Nov 11, 2024
 *      Author: ADMIN
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "software_timer.h"
#include "button.h"
#include "traffic_light.h"
#include "fsm_automatic.h"
#include "fsm_manual.h"
#include "led_displayer.h"

//software_timer
#define TIMER_CYCLE		10

#define YELLOW_TIME		2
#define GREEN_TIME		3
#define RED_TIME		5

//fsm
extern int redTime;
extern int yellowTime;
extern int greenTime;
extern int ledModeData;
extern int ledValueData;
	//fsm_automatic
extern int state;
	//fsm_manual
extern int mode;
#define MODE1			1
#define MODE2 			2
#define MODE3	 		3
#define MODE4			4

void initValues();

#endif /* INC_GLOBAL_H_ */
