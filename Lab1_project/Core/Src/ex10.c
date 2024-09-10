/*
 * ex10.c
 *
 *  Created on: Sep 7, 2024
 *      Author: thuyh
 */
#include "ex10.h"

void ex10_init(){
	  clearAllClock(GPIOA, GREEN_1_Pin, YELLOW_1_Pin, RED_1_Pin, GREEN_2_Pin, YELLOW_2_Pin, RED_2_Pin,
	  GREEN_3_Pin, YELLOW_3_Pin, RED_3_Pin, GREEN_4_Pin, YELLOW_4_Pin, RED_4_Pin);
}
uint16_t num = 0;
void ex10_run(){



		  if(num>=43200){
			  num = 0;
		  }

		  uint16_t second = num % 60;
		  uint16_t minutes = (num / 60 )% 60;
		  uint16_t hour = (num / 3600);
		  uint16_t led_secound = second/5;
		  uint16_t led_minutes = minutes /5;
		  uint16_t led_hour = hour;






		 setNumberOnClock(GPIOA,   RED_1_Pin, GREEN_2_Pin, YELLOW_2_Pin, RED_2_Pin, GREEN_3_Pin, YELLOW_3_Pin, RED_3_Pin, GREEN_4_Pin, YELLOW_4_Pin, RED_4_Pin,GREEN_1_Pin,YELLOW_1_Pin,led_secound);
		 setNumberOnClock(GPIOA,   RED_1_Pin, GREEN_2_Pin, YELLOW_2_Pin, RED_2_Pin, GREEN_3_Pin, YELLOW_3_Pin, RED_3_Pin, GREEN_4_Pin, YELLOW_4_Pin, RED_4_Pin,GREEN_1_Pin,YELLOW_1_Pin,led_minutes);
		 setNumberOnClock(GPIOA,   RED_1_Pin, GREEN_2_Pin, YELLOW_2_Pin, RED_2_Pin, GREEN_3_Pin, YELLOW_3_Pin, RED_3_Pin, GREEN_4_Pin, YELLOW_4_Pin, RED_4_Pin,GREEN_1_Pin,YELLOW_1_Pin,led_hour);
		 if((led_secound+11)%12!=led_hour&&(led_secound+11)%12!=led_minutes){
			 clearNumberOnClock(GPIOA,   RED_1_Pin, GREEN_2_Pin, YELLOW_2_Pin, RED_2_Pin, GREEN_3_Pin, YELLOW_3_Pin, RED_3_Pin, GREEN_4_Pin, YELLOW_4_Pin, RED_4_Pin,GREEN_1_Pin,YELLOW_1_Pin,(led_secound+11)%12);
		 }
		 if((led_minutes+11)%12!=led_hour&&(led_minutes+11)%12!=led_secound){
			 clearNumberOnClock(GPIOA,   RED_1_Pin, GREEN_2_Pin, YELLOW_2_Pin, RED_2_Pin, GREEN_3_Pin, YELLOW_3_Pin, RED_3_Pin, GREEN_4_Pin, YELLOW_4_Pin, RED_4_Pin,GREEN_1_Pin,YELLOW_1_Pin,(led_minutes+11)%12);
		 }
		 if((led_hour+11)%12!=led_secound&&(led_hour+11)%12!=led_minutes){
			 clearNumberOnClock(GPIOA,   RED_1_Pin, GREEN_2_Pin, YELLOW_2_Pin, RED_2_Pin, GREEN_3_Pin, YELLOW_3_Pin, RED_3_Pin, GREEN_4_Pin, YELLOW_4_Pin, RED_4_Pin,GREEN_1_Pin,YELLOW_1_Pin,(led_hour+11)%12);

		 }


		  num++;

	    /* USER CODE END WHILE */


	    /* USER CODE BEGIN 3 */

}
