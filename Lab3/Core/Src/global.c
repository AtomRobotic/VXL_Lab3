/*
 * global.c
 *
 *  Created on: Nov 11, 2024
 *      Author: ADMIN
 */


#include "global.h"

int state = init;

int yellowTime;
int greenTime;
int redTime;

int ledModeData;
int ledValueData;

void initValues() {
	yellowTime = YELLOW_TIME;
	greenTime = GREEN_TIME;
	redTime = RED_TIME;
	ledModeData = redTime;
	ledValueData = greenTime;
}
