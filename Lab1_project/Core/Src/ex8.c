/*
 * ex8.c
 *
 *  Created on: Sep 7, 2024
 *      Author: thuyh
 */
#include "ex8.h"
void ex8_init()
{
clearAllClock(GPIOA, GREEN_1_Pin, YELLOW_1_Pin, RED_1_Pin, GREEN_2_Pin, YELLOW_2_Pin, RED_2_Pin,
GREEN_3_Pin, YELLOW_3_Pin, RED_3_Pin, GREEN_4_Pin, YELLOW_4_Pin, RED_4_Pin);
}
int num = 0;
void ex8_run()
{
if(num>=12)
{
   num = 0;
}
setNumberOnClock(GPIOA,  RED_1_Pin, GREEN_2_Pin, YELLOW_2_Pin, RED_2_Pin,
GREEN_3_Pin, YELLOW_3_Pin, RED_3_Pin, GREEN_4_Pin, YELLOW_4_Pin, RED_4_Pin,GREEN_1_Pin,YELLOW_1_Pin,num);
num++;
}
