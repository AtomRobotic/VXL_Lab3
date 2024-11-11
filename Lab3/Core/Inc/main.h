/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_RED_1_Pin GPIO_PIN_1
#define LED_RED_1_GPIO_Port GPIOA
#define LED_YELLOW_1_Pin GPIO_PIN_2
#define LED_YELLOW_1_GPIO_Port GPIOA
#define LED_GREEN_1_Pin GPIO_PIN_3
#define LED_GREEN_1_GPIO_Port GPIOA
#define LED_RED_2_Pin GPIO_PIN_4
#define LED_RED_2_GPIO_Port GPIOA
#define LED_YELLOW_2_Pin GPIO_PIN_5
#define LED_YELLOW_2_GPIO_Port GPIOA
#define LED_GREEN_2_Pin GPIO_PIN_6
#define LED_GREEN_2_GPIO_Port GPIOA
#define SEG_A_1_Pin GPIO_PIN_0
#define SEG_A_1_GPIO_Port GPIOB
#define SEG_A_2_Pin GPIO_PIN_1
#define SEG_A_2_GPIO_Port GPIOB
#define SEG_A_3_Pin GPIO_PIN_2
#define SEG_A_3_GPIO_Port GPIOB
#define SEG_C_3_Pin GPIO_PIN_10
#define SEG_C_3_GPIO_Port GPIOB
#define SEG_C_4_Pin GPIO_PIN_11
#define SEG_C_4_GPIO_Port GPIOB
#define SEG_D_1_Pin GPIO_PIN_12
#define SEG_D_1_GPIO_Port GPIOB
#define SEG_D_2_Pin GPIO_PIN_13
#define SEG_D_2_GPIO_Port GPIOB
#define SEG_D_3_Pin GPIO_PIN_14
#define SEG_D_3_GPIO_Port GPIOB
#define SEG_D_4_Pin GPIO_PIN_15
#define SEG_D_4_GPIO_Port GPIOB
#define BUTTON_1_Pin GPIO_PIN_13
#define BUTTON_1_GPIO_Port GPIOA
#define BUTTON_2_Pin GPIO_PIN_14
#define BUTTON_2_GPIO_Port GPIOA
#define BUTTON_3_Pin GPIO_PIN_15
#define BUTTON_3_GPIO_Port GPIOA
#define SEG_A_4_Pin GPIO_PIN_3
#define SEG_A_4_GPIO_Port GPIOB
#define SEG_B_1_Pin GPIO_PIN_4
#define SEG_B_1_GPIO_Port GPIOB
#define SEG_B_2_Pin GPIO_PIN_5
#define SEG_B_2_GPIO_Port GPIOB
#define SEG_B_3_Pin GPIO_PIN_6
#define SEG_B_3_GPIO_Port GPIOB
#define SEG_B_4_Pin GPIO_PIN_7
#define SEG_B_4_GPIO_Port GPIOB
#define SEG_C_1_Pin GPIO_PIN_8
#define SEG_C_1_GPIO_Port GPIOB
#define SEG_C_2_Pin GPIO_PIN_9
#define SEG_C_2_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
