/*
 * ex3.c
 *
 *  Created on: Sep 6, 2024
 *      Author: thuyh
 */
#include "ex3.h"
void ex3_init(){
traffic(GPIOA, RED_1_Pin, YELLOW_1_Pin, GREEN_1_Pin, GREEN);
traffic(GPIOA, RED_3_Pin, YELLOW_3_Pin, GREEN_3_Pin, GREEN);
traffic(GPIOA, RED_2_Pin, YELLOW_2_Pin, GREEN_2_Pin, RED);
traffic(GPIOA, RED_4_Pin, YELLOW_4_Pin, GREEN_4_Pin, RED);
}
int ex3_count = 3;
int ex3_state = 0;
int ex3_count_1 = 5;

void ex3_run(){
	switch (ex3_state){
		 case 0:
			 // GREEN 3s
			 if(ex3_count >=4)
			 {
				 ex3_count =3;
			 }
			 if(ex3_count<=0)
			 {
				 ex3_state = 1;
				 ex3_count = 2;
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
			 if(ex3_count >=3)
			 {
			     ex3_count =2;
			 }
			 if(ex3_count<=0)
			 {
				ex3_state = 2;
			    ex3_count = 5;
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
			   ex3_count_1=3;
			 }
			 break;
		 case 2:
			 // RED 5s
			 if(ex3_count >=6)
			 {
			 	ex3_count =5;
			 }
			 if(ex3_count_1<=0){
				 ex3_count_1 = 2;
				 /*
				 HAL_GPIO_WritePin(GPIOA, GREEN_2_Pin,SET);
				 HAL_GPIO_WritePin(GPIOA, YELLOW_2_Pin,RESET);
				 HAL_GPIO_WritePin(GPIOA, RED_2_Pin,SET);
				 */
				 traffic(GPIOA, RED_2_Pin, YELLOW_2_Pin, GREEN_2_Pin, YELLOW);
				 traffic(GPIOA, RED_4_Pin, YELLOW_4_Pin, GREEN_4_Pin, YELLOW);
			 }
			 if(ex3_count<=0)
			 {
			 	ex3_state = 0;
			 	ex3_count = 3;
			 	ex3_count_1=5;
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
		 ex3_state = 0;
			 break;
		 }

		 ex3_count_1--;
		 ex3_count --;
		 HAL_Delay(200);

	    /* USER CODE END WHILE */

	    /* USER CODE BEGIN 3 */
	  }

