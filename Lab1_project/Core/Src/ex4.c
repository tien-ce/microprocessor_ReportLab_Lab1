/*
 * ex4.c
 *
 *  Created on: Sep 7, 2024
 *      Author: thuyh
 */
#include "ex4.h"
void ex4_init(){}

void ex4_run(int num){
DISPLAY_LED_7_SEGMENT(GPIOB, LED7_1_1_Pin, LED7_1_2_Pin, LED7_1_3_Pin, LED7_1_4_Pin, LED7_1_5_Pin, LED7_1_6_Pin, LED7_1_7_Pin, num);
}
