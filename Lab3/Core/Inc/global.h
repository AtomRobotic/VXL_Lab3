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

#define TIMER_CYCLE	10

#define YELLOW_TIME		1
#define GREEN_TIME		2
#define RED_TIME		3

extern int redTime;
extern int yellowTime;
extern int greenTime;
extern int ledModeData;
extern int ledValueData;

void initValues();

extern int state;

#endif /* INC_GLOBAL_H_ */
