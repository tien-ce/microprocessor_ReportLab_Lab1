/*
 * ex5.c
 *
 *  Created on: Sep 7, 2024
 *      Author: thuyh
 */


#include "ex5.h"
void ex5_init(){}

int ex5_count = 3;
int ex5_state = 0;
int ex5_count_1 = 5;

void ex5_run(){
	switch (ex5_state){
		 case 0:
			 // GREEN 3s
			 if(ex5_count >=4)
			 {
				 ex5_count =3;
			 }
			 if(ex5_count<=0)
			 {
				 ex5_state = 1;
				 ex5_count = 2;
				/* HAL_GPIO_WritePin(GPIOA, GREEN_1_Pin,SET);
				 HAL_GPIO_WritePin(GPIOA, YELLOW_1_Pin,RESET);
				 HAL_GPIO_WritePin(GPIOA, RED_1_Pin,SET);
				 */
				 traffic(GPIOA, RED_1_Pin, YELLOW_1_Pin, GREEN_1_Pin, YELLOW);
				 traffic(GPIOA, RED_3_Pin, YELLOW_3_Pin, GREEN_3_Pin, YELLOW);

			 }
			 break;
		 case 1:
			 // YELLOW 2s
			 if(ex5_count >=3)
			 {
			     ex5_count =2;
			 }
			 if(ex5_count<=0)
			 {
				ex5_state = 2;
			    ex5_count = 5;
			    /*
			    HAL_GPIO_WritePin(GPIOA, GREEN_1_Pin,SET);
			    HAL_GPIO_WritePin(GPIOA, YELLOW_1_Pin,SET);
			    HAL_GPIO_WritePin(GPIOA, RED_1_Pin,RESET);
			    HAL_GPIO_WritePin(GPIOA, GREEN_2_Pin,RESET);
			    HAL_GPIO_WritePin(GPIOA, YELLOW_2_Pin,SET);
			    HAL_GPIO_WritePin(GPIOA, RED_2_Pin,SET);
			    */
			    traffic(GPIOA, RED_1_Pin, YELLOW_1_Pin, GREEN_1_Pin, RED);
			    traffic(GPIOA, RED_3_Pin, YELLOW_3_Pin, GREEN_3_Pin, RED);
			    traffic(GPIOA, RED_2_Pin, YELLOW_2_Pin, GREEN_2_Pin, GREEN);
			    traffic(GPIOA, RED_4_Pin, YELLOW_4_Pin, GREEN_4_Pin, GREEN);
			   ex5_count_1=3;
			 }
			 break;
		 case 2:
			 // RED 5s
			 if(ex5_count >=6)
			 {
			 	ex5_count =5;
			 }
			 if(ex5_count_1<=0){
				 ex5_count_1 = 2;
				 /*
				 HAL_GPIO_WritePin(GPIOA, GREEN_2_Pin,SET);
				 HAL_GPIO_WritePin(GPIOA, YELLOW_2_Pin,RESET);
				 HAL_GPIO_WritePin(GPIOA, RED_2_Pin,SET);
				 */
				 traffic(GPIOA, RED_2_Pin, YELLOW_2_Pin, GREEN_2_Pin, YELLOW);
				 traffic(GPIOA, RED_4_Pin, YELLOW_4_Pin, GREEN_4_Pin, YELLOW);
			 }
			 if(ex5_count<=0)
			 {
			 	ex5_state = 0;
			 	ex5_count = 3;
			 	ex5_count_1=5;
			 	/*
			 	  HAL_GPIO_WritePin(GPIOA, GREEN_1_Pin, RESET);
			 	  HAL_GPIO_WritePin(GPIOA, RED_1_Pin,SET);
			 	  HAL_GPIO_WritePin(GPIOA, YELLOW_1_Pin,SET);
			 	  HAL_GPIO_WritePin(GPIOA, GREEN_2_Pin, SET);
			 	  HAL_GPIO_WritePin(GPIOA, YELLOW_2_Pin,SET);
			 	  HAL_GPIO_WritePin(GPIOA, RED_2_Pin,RESET);
			 	*/
			 	traffic(GPIOA, RED_1_Pin, YELLOW_1_Pin, GREEN_1_Pin, GREEN);
			 	traffic(GPIOA, RED_3_Pin, YELLOW_3_Pin, GREEN_3_Pin, GREEN);
			    traffic(GPIOA, RED_2_Pin, YELLOW_2_Pin, GREEN_2_Pin, RED);
			    traffic(GPIOA, RED_4_Pin, YELLOW_4_Pin, GREEN_4_Pin, RED);
			 }
			 break;
		 default:
		 ex5_state = 0;
			 break;
		 }

		 ex5_count_1--;
		 ex5_count --;
		 HAL_Delay(200);

	    /* USER CODE END WHILE */

	    /* USER CODE BEGIN 3 */
		 DISPLAY_LED_7_SEGMENT(GPIOB, LED7_1_1_Pin, LED7_1_2_Pin, LED7_1_3_Pin, LED7_1_4_Pin, LED7_1_5_Pin, LED7_1_6_Pin, LED7_1_7_Pin, ex5_count_1);
		 DISPLAY_LED_7_SEGMENT(GPIOB, LED7_2_1_Pin, LED7_2_2_Pin, LED7_2_3_Pin, LED7_2_4_Pin, LED7_2_5_Pin, LED7_2_6_Pin, LED7_2_7_Pin, ex5_count);
	  }
