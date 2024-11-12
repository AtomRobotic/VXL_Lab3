/*
 * fsm_control7seg.c
 *
 *  Created on: Nov 11, 2024
 *      Author: ADMIN
 */

#include "fsm_manual.h"

int tempVal;

int newRedTime;
int newYellowTime;
int newGreenTime;

void fsm_manual_run(){
	switch(mode){
	case MODE1:
		fsm_automatic_run();
		if(isButtonPressed(BUTTON_1_PRESS) == 1){
			setTimer3(500);
			tempVal = redTime;
			ledModeData = MODE2;
			ledValueData = redTime;
			mode = MODE2;
			AllLedOff();
		}
		break;
	case MODE2:
		if(timer3_flag == 1){
			setTimer3(500);
			BlinkingRedLed();
			update7SEG_AB(ledModeData);
			update7SEG_CD(ledValueData);
		}
		if(isButtonPressed(BUTTON_1_PRESS) == 1){
			setTimer3(500);
			tempVal = yellowTime;
			ledModeData = MODE3;
			ledValueData = yellowTime;
			mode = MODE3;
			AllLedOff();
		}
		if(isButtonPressed(BUTTON_2_PRESS) == 1){
			if(tempVal > 99){
				tempVal = 1;
			}
			tempVal++;
			ledValueData = tempVal;
		}
		if(isButtonPressed(BUTTON_3_PRESS) == 1){
			newRedTime = tempVal;
			ledValueData = newRedTime;
		}
		break;
	case MODE3:
		if(timer3_flag == 1){
			setTimer3(500);
			BlinkingYellowLed();
			update7SEG_AB(ledModeData);
			update7SEG_CD(ledValueData);
		}
		if(isButtonPressed(BUTTON_1_PRESS) == 1){
			setTimer3(500);
			tempVal = greenTime;
			ledModeData = MODE4;
			ledValueData = greenTime;
			mode = MODE4;
			AllLedOff();
		}
		if(isButtonPressed(BUTTON_2_PRESS) == 1){
			if(tempVal > 99){
				tempVal = 1;
			}
			tempVal++;
			ledValueData = tempVal;
		}
		if(isButtonPressed(BUTTON_3_PRESS) == 1){
			newYellowTime = tempVal;
			ledValueData = newYellowTime;
		}
		break;
	case MODE4:
		if(timer3_flag == 1){
			setTimer3(500);
			BlinkingGreenLed();
			update7SEG_AB(ledModeData);
			update7SEG_CD(ledValueData);
		}
		if(isButtonPressed(BUTTON_1_PRESS) == 1){
			state = init;
			setTimer3(500);
			mode = MODE1;
		}
		if(isButtonPressed(BUTTON_2_PRESS) == 1){
			if(tempVal > 99){
				tempVal = 1;
			}
			tempVal++;
			ledValueData = tempVal;
		}
		if(isButtonPressed(BUTTON_3_PRESS) == 1){
			newGreenTime = tempVal;
			ledValueData = newGreenTime;
			if(newRedTime == newGreenTime + newYellowTime){
				redTime = newRedTime;
				yellowTime = newYellowTime;
				greenTime = newGreenTime;
			}
		}
		break;
	default:
		break;
	}
}
