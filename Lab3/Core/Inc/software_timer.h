/*
 * software_timer.h
 *
 *  Created on: Nov 11, 2024
 *      Author: ADMIN
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include "global.h"

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;

extern int timer1_counter;
extern int timer2_counter;
extern int timer3_counter;

void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);

void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
