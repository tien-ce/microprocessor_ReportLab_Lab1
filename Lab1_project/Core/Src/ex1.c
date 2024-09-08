/*
 * ex1.c
 *
 *  Created on: Sep 6, 2024
 *      Author: thuyh
 */

#include "ex1.h"
void ex1_init(){}
void ex1_run(){
	HAL_GPIO_TogglePin(GPIOA, LED_RED_Pin);
	HAL_GPIO_TogglePin(GPIOA,LED_YELLOW_Pin);
}
