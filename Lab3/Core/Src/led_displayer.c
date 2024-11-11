/*
 * led_displayer.c
 *
 *  Created on: Nov 11, 2024
 *      Author: ADMIN
 */


/*
 * led_display.c
 *
 *  Created on: Nov 4, 2022
 *      Author: trong
 */

#include "led_displayer.h"

void display_SEG_A(int counter) {
	//led display number 0
	if (counter == 0) {
		HAL_GPIO_WritePin(SEG_A_1_GPIO_Port, SEG_A_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_A_2_GPIO_Port, SEG_A_2_Pin, SET);
		HAL_GPIO_WritePin(SEG_A_3_GPIO_Port, SEG_A_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_A_4_GPIO_Port, SEG_A_4_Pin, SET);
	}
	//led display number 1
	if (counter == 1) {
		HAL_GPIO_WritePin(SEG_A_1_GPIO_Port, SEG_A_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_A_2_GPIO_Port, SEG_A_2_Pin, SET);
		HAL_GPIO_WritePin(SEG_A_3_GPIO_Port, SEG_A_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_A_4_GPIO_Port, SEG_A_4_Pin, RESET);
	}
	//led display number 2
	if (counter == 2) {
		HAL_GPIO_WritePin(SEG_A_1_GPIO_Port, SEG_A_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_A_2_GPIO_Port, SEG_A_2_Pin, SET);
		HAL_GPIO_WritePin(SEG_A_3_GPIO_Port, SEG_A_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_A_4_GPIO_Port, SEG_A_4_Pin, SET);
	}
	//led display number 3
	if (counter == 3) {
		HAL_GPIO_WritePin(SEG_A_1_GPIO_Port, SEG_A_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_A_2_GPIO_Port, SEG_A_2_Pin, SET);
		HAL_GPIO_WritePin(SEG_A_3_GPIO_Port, SEG_A_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_A_4_GPIO_Port, SEG_A_4_Pin, RESET);
	}
	//led display number 4
	if (counter == 4) {
		HAL_GPIO_WritePin(SEG_A_1_GPIO_Port, SEG_A_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_A_2_GPIO_Port, SEG_A_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_A_3_GPIO_Port, SEG_A_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_A_4_GPIO_Port, SEG_A_4_Pin, SET);
	}
	//led display number 5
	if (counter == 5) {
		HAL_GPIO_WritePin(SEG_A_1_GPIO_Port, SEG_A_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_A_2_GPIO_Port, SEG_A_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_A_3_GPIO_Port, SEG_A_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_A_4_GPIO_Port, SEG_A_4_Pin, RESET);
	}
	//led display number 6
	if (counter == 6) {
		HAL_GPIO_WritePin(SEG_A_1_GPIO_Port, SEG_A_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_A_2_GPIO_Port, SEG_A_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_A_3_GPIO_Port, SEG_A_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_A_4_GPIO_Port, SEG_A_4_Pin, SET);
	}
	//led display number 7
	if (counter == 7) {
		HAL_GPIO_WritePin(SEG_A_1_GPIO_Port, SEG_A_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_A_2_GPIO_Port, SEG_A_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_A_3_GPIO_Port, SEG_A_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_A_4_GPIO_Port, SEG_A_4_Pin, RESET);
	}
	//led display number 8
	if (counter == 8) {
		HAL_GPIO_WritePin(SEG_A_1_GPIO_Port, SEG_A_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_A_2_GPIO_Port, SEG_A_2_Pin, SET);
		HAL_GPIO_WritePin(SEG_A_3_GPIO_Port, SEG_A_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_A_4_GPIO_Port, SEG_A_4_Pin, SET);
	}
	//led display number 9
	if (counter == 9) {
		HAL_GPIO_WritePin(SEG_A_1_GPIO_Port, SEG_A_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_A_2_GPIO_Port, SEG_A_2_Pin, SET);
		HAL_GPIO_WritePin(SEG_A_3_GPIO_Port, SEG_A_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_A_4_GPIO_Port, SEG_A_4_Pin, RESET);
	}
}

void display_SEG_B(int counter) {
	//led display number 0
	if (counter == 0) {
		HAL_GPIO_WritePin(SEG_B_1_GPIO_Port, SEG_B_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_B_2_GPIO_Port, SEG_B_2_Pin, SET);
		HAL_GPIO_WritePin(SEG_B_3_GPIO_Port, SEG_B_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_B_4_GPIO_Port, SEG_B_4_Pin, SET);
	}
	//led display number 1
	if (counter == 1) {
		HAL_GPIO_WritePin(SEG_B_1_GPIO_Port, SEG_B_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_B_2_GPIO_Port, SEG_B_2_Pin, SET);
		HAL_GPIO_WritePin(SEG_B_3_GPIO_Port, SEG_B_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_B_4_GPIO_Port, SEG_B_4_Pin, RESET);
	}
	//led display number 2
	if (counter == 2) {
		HAL_GPIO_WritePin(SEG_B_1_GPIO_Port, SEG_B_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_B_2_GPIO_Port, SEG_B_2_Pin, SET);
		HAL_GPIO_WritePin(SEG_B_3_GPIO_Port, SEG_B_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B_4_GPIO_Port, SEG_B_4_Pin, SET);
	}
	//led display number 3
	if (counter == 3) {
		HAL_GPIO_WritePin(SEG_B_1_GPIO_Port, SEG_B_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_B_2_GPIO_Port, SEG_B_2_Pin, SET);
		HAL_GPIO_WritePin(SEG_B_3_GPIO_Port, SEG_B_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B_4_GPIO_Port, SEG_B_4_Pin, RESET);
	}
	//led display number 4
	if (counter == 4) {
		HAL_GPIO_WritePin(SEG_B_1_GPIO_Port, SEG_B_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_B_2_GPIO_Port, SEG_B_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B_3_GPIO_Port, SEG_B_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_B_4_GPIO_Port, SEG_B_4_Pin, SET);
	}
	//led display number 5
	if (counter == 5) {
		HAL_GPIO_WritePin(SEG_B_1_GPIO_Port, SEG_B_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_B_2_GPIO_Port, SEG_B_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B_3_GPIO_Port, SEG_B_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_B_4_GPIO_Port, SEG_B_4_Pin, RESET);
	}
	//led display number 6
	if (counter == 6) {
		HAL_GPIO_WritePin(SEG_B_1_GPIO_Port, SEG_B_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_B_2_GPIO_Port, SEG_B_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B_3_GPIO_Port, SEG_B_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B_4_GPIO_Port, SEG_B_4_Pin, SET);
	}
	//led display number 7
	if (counter == 7) {
		HAL_GPIO_WritePin(SEG_B_1_GPIO_Port, SEG_B_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_B_2_GPIO_Port, SEG_B_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B_3_GPIO_Port, SEG_B_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B_4_GPIO_Port, SEG_B_4_Pin, RESET);
	}
	//led display number 8
	if (counter == 8) {
		HAL_GPIO_WritePin(SEG_B_1_GPIO_Port, SEG_B_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B_2_GPIO_Port, SEG_B_2_Pin, SET);
		HAL_GPIO_WritePin(SEG_B_3_GPIO_Port, SEG_B_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_B_4_GPIO_Port, SEG_B_4_Pin, SET);
	}
	//led display number 9
	if (counter == 9) {
		HAL_GPIO_WritePin(SEG_B_1_GPIO_Port, SEG_B_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B_2_GPIO_Port, SEG_B_2_Pin, SET);
		HAL_GPIO_WritePin(SEG_B_3_GPIO_Port, SEG_B_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_B_4_GPIO_Port, SEG_B_4_Pin, RESET);
	}
}

void display_SEG_C(int counter) {
	//led display number 0
	if (counter == 0) {
		HAL_GPIO_WritePin(SEG_C_1_GPIO_Port, SEG_C_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_C_2_GPIO_Port, SEG_C_2_Pin, SET);
		HAL_GPIO_WritePin(SEG_C_3_GPIO_Port, SEG_C_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_C_4_GPIO_Port, SEG_C_4_Pin, SET);
	}
	//led display number 1
	if (counter == 1) {
		HAL_GPIO_WritePin(SEG_C_1_GPIO_Port, SEG_C_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_C_2_GPIO_Port, SEG_C_2_Pin, SET);
		HAL_GPIO_WritePin(SEG_C_3_GPIO_Port, SEG_C_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_C_4_GPIO_Port, SEG_C_4_Pin, RESET);
	}
	//led display number 2
	if (counter == 2) {
		HAL_GPIO_WritePin(SEG_C_1_GPIO_Port, SEG_C_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_C_2_GPIO_Port, SEG_C_2_Pin, SET);
		HAL_GPIO_WritePin(SEG_C_3_GPIO_Port, SEG_C_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C_4_GPIO_Port, SEG_C_4_Pin, SET);
	}
	//led display number 3
	if (counter == 3) {
		HAL_GPIO_WritePin(SEG_C_1_GPIO_Port, SEG_C_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_C_2_GPIO_Port, SEG_C_2_Pin, SET);
		HAL_GPIO_WritePin(SEG_C_3_GPIO_Port, SEG_C_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C_4_GPIO_Port, SEG_C_4_Pin, RESET);
	}
	//led display number 4
	if (counter == 4) {
		HAL_GPIO_WritePin(SEG_C_1_GPIO_Port, SEG_C_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_C_2_GPIO_Port, SEG_C_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C_3_GPIO_Port, SEG_C_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_C_4_GPIO_Port, SEG_C_4_Pin, SET);
	}
	//led display number 5
	if (counter == 5) {
		HAL_GPIO_WritePin(SEG_C_1_GPIO_Port, SEG_C_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_C_2_GPIO_Port, SEG_C_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C_3_GPIO_Port, SEG_C_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_C_4_GPIO_Port, SEG_C_4_Pin, RESET);
	}
	//led display number 6
	if (counter == 6) {
		HAL_GPIO_WritePin(SEG_C_1_GPIO_Port, SEG_C_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_C_2_GPIO_Port, SEG_C_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C_3_GPIO_Port, SEG_C_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C_4_GPIO_Port, SEG_C_4_Pin, SET);
	}
	//led display number 7
	if (counter == 7) {
		HAL_GPIO_WritePin(SEG_C_1_GPIO_Port, SEG_C_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_C_2_GPIO_Port, SEG_C_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C_3_GPIO_Port, SEG_C_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C_4_GPIO_Port, SEG_C_4_Pin, RESET);
	}
	//led display number 8
	if (counter == 8) {
		HAL_GPIO_WritePin(SEG_C_1_GPIO_Port, SEG_C_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C_2_GPIO_Port, SEG_C_2_Pin, SET);
		HAL_GPIO_WritePin(SEG_C_3_GPIO_Port, SEG_C_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_C_4_GPIO_Port, SEG_C_4_Pin, SET);
	}
	//led display number 9
	if (counter == 9) {
		HAL_GPIO_WritePin(SEG_C_1_GPIO_Port, SEG_C_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C_2_GPIO_Port, SEG_C_2_Pin, SET);
		HAL_GPIO_WritePin(SEG_C_3_GPIO_Port, SEG_C_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_C_4_GPIO_Port, SEG_C_4_Pin, RESET);
	}
}

void display_SEG_D(int counter) {
	//led display number 0
	if (counter == 0) {
		HAL_GPIO_WritePin(SEG_D_1_GPIO_Port, SEG_D_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_D_2_GPIO_Port, SEG_D_2_Pin, SET);
		HAL_GPIO_WritePin(SEG_D_3_GPIO_Port, SEG_D_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_D_4_GPIO_Port, SEG_D_4_Pin, SET);
	}
	//led display number 1
	if (counter == 1) {
		HAL_GPIO_WritePin(SEG_D_1_GPIO_Port, SEG_D_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_D_2_GPIO_Port, SEG_D_2_Pin, SET);
		HAL_GPIO_WritePin(SEG_D_3_GPIO_Port, SEG_D_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_D_4_GPIO_Port, SEG_D_4_Pin, RESET);
	}
	//led display number 2
	if (counter == 2) {
		HAL_GPIO_WritePin(SEG_D_1_GPIO_Port, SEG_D_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_D_2_GPIO_Port, SEG_D_2_Pin, SET);
		HAL_GPIO_WritePin(SEG_D_3_GPIO_Port, SEG_D_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D_4_GPIO_Port, SEG_D_4_Pin, SET);
	}
	//led display number 3
	if (counter == 3) {
		HAL_GPIO_WritePin(SEG_D_1_GPIO_Port, SEG_D_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_D_2_GPIO_Port, SEG_D_2_Pin, SET);
		HAL_GPIO_WritePin(SEG_D_3_GPIO_Port, SEG_D_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D_4_GPIO_Port, SEG_D_4_Pin, RESET);
	}
	//led display number 4
	if (counter == 4) {
		HAL_GPIO_WritePin(SEG_D_1_GPIO_Port, SEG_D_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_D_2_GPIO_Port, SEG_D_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D_3_GPIO_Port, SEG_D_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_D_4_GPIO_Port, SEG_D_4_Pin, SET);
	}
	//led display number 5
	if (counter == 5) {
		HAL_GPIO_WritePin(SEG_D_1_GPIO_Port, SEG_D_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_D_2_GPIO_Port, SEG_D_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D_3_GPIO_Port, SEG_D_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_D_4_GPIO_Port, SEG_D_4_Pin, RESET);
	}
	//led display number 6
	if (counter == 6) {
		HAL_GPIO_WritePin(SEG_D_1_GPIO_Port, SEG_D_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_D_2_GPIO_Port, SEG_D_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D_3_GPIO_Port, SEG_D_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D_4_GPIO_Port, SEG_D_4_Pin, SET);
	}
	//led display number 7
	if (counter == 7) {
		HAL_GPIO_WritePin(SEG_D_1_GPIO_Port, SEG_D_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_D_2_GPIO_Port, SEG_D_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D_3_GPIO_Port, SEG_D_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D_4_GPIO_Port, SEG_D_4_Pin, RESET);
	}
	//led display number 8
	if (counter == 8) {
		HAL_GPIO_WritePin(SEG_D_1_GPIO_Port, SEG_D_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D_2_GPIO_Port, SEG_D_2_Pin, SET);
		HAL_GPIO_WritePin(SEG_D_3_GPIO_Port, SEG_D_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_D_4_GPIO_Port, SEG_D_4_Pin, SET);
	}
	//led display number 9
	if (counter == 9) {
		HAL_GPIO_WritePin(SEG_D_1_GPIO_Port, SEG_D_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D_2_GPIO_Port, SEG_D_2_Pin, SET);
		HAL_GPIO_WritePin(SEG_D_3_GPIO_Port, SEG_D_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_D_4_GPIO_Port, SEG_D_4_Pin, RESET);
	}
}

void update7SEG_AB(int data){
	display_SEG_A(data / 10);
	display_SEG_B(data % 10);
}

void update7SEG_CD(int data){
	display_SEG_C(data / 10);
	display_SEG_D(data % 10);
}
