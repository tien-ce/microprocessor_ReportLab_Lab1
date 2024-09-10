/*
 * ex2.c
 *
 *  Created on: Sep 6, 2024
 *      Author: thuyh
 */
#include "ex2.h"

void ex2_init(){
traffic(GPIOA, RED_1_Pin, YELLOW_1_Pin, GREEN_1_Pin, GREEN);
}
int count = 2;
int state = 0;
void ex2_run(){
	 switch (state){
		 case 0:
			 // GREEN 3s
			 if(count >=3)
			 {
				 count =2;
			 }
			 if(count<0)
			 {
				 state = 1;
				 count = 1;
				 traffic(GPIOA, RED_1_Pin, YELLOW_1_Pin, GREEN_1_Pin, YELLOW);

			 }
			 break;
		 case 1:
			 // YELLOW 2s
			 if(count >=2)
			 {
			     count =1;
			 }
			 if(count<0)
			 {
				state = 2;
			    count = 4;
			    traffic(GPIOA, RED_1_Pin, YELLOW_1_Pin, GREEN_1_Pin, RED);
			 }
			 break;
		 case 2:
			 // RED 5s
			 if(count >=5)
			 {
			 	count =4;
			 }
			 if(count<0)
			 {
			 	state = 0;
			 	count = 2;
			 	traffic(GPIOA, RED_1_Pin, YELLOW_1_Pin, GREEN_1_Pin, GREEN);
			 }
			 break;
		 default:
		 state = 0;
			 break;
		 }


		 count --;

}
