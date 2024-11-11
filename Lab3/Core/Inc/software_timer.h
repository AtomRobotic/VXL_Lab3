/*
 * software_timer.h
 *
 *  Created on: Nov 11, 2024
 *      Author: ADMIN
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

#include "global.h"

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;

void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
