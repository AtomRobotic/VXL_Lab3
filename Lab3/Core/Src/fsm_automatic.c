/*
 * fsm_automatic.c
 *
 *  Created on: Nov 11, 2024
 *      Author: ADMIN
 */


#include "fsm_automatic.h"



void fsm_automatic_run(){
	switch (state){
	case init:
		setTimer1(greenTime * 1000);
		ledModeData = redTime;
		ledValueData = greenTime;
		OnRed_1();
		OnGreen_2();
		state = state1;
		break;
	case state1:
		if(timer1_flag == 1){
			setTimer1(yellowTime * 1000);
			OnYellow_2();
			ledValueData = yellowTime;
			state = state2;
		}
		break;
	case state2:
		if(timer1_flag == 1){
			setTimer1(greenTime * 1000);
			OnGreen_1();
			OnRed_2();
			ledModeData = greenTime;
			ledValueData = redTime;
			state = state3;
		}
		break;
	case state3:
		if(timer1_flag == 1){
			setTimer1(yellowTime * 1000);
			OnYellow_1();
			ledModeData = yellowTime;
			state = state4;
		}
		break;
	case state4:
		if(timer1_flag == 1){
			setTimer1(greenTime * 1000);
			OnRed_1();
			OnGreen_2();
			ledModeData = redTime;
			ledValueData = greenTime;
			state = state1;
		}
		break;
	default:
		break;
	}
	if(timer2_flag == 1){
		setTimer2(1000);
		update7SEG_AB(ledModeData);
		update7SEG_CD(ledValueData);
		ledModeData--;
		ledValueData--;
	}
}
