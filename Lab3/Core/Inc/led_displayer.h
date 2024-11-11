/*
 * led_displayer.h
 *
 *  Created on: Nov 11, 2024
 *      Author: ADMIN
 */

#ifndef INC_LED_DISPLAYER_H_
#define INC_LED_DISPLAYER_H_

#include "global.h"

void display_SEG_A(int counter);
void display_SEG_B(int counter);
void display_SEG_C(int counter);
void display_SEG_D(int counter);
void update7SEG_AB(int data);
void update7SEG_CD(int data);

#endif /* INC_LED_DISPLAYER_H_ */
