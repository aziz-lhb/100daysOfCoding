#include "main.h"
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
int main(void)
{
  HAL_Init();


  SystemClock_Config();

  MX_GPIO_Init();
  while (1)
  {
		int push_state;
		reset: push_state= 0;
		cond:	if( HAL_GPIO_ReadPin(push_GPIO_Port, push_Pin))
		{
			++push_state;
			HAL_Delay (100);
		}
		 if (push_state == 1){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 0);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if(push_state == 2){
			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 0);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 2);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
				goto cond;

		}
			if (push_state == 3){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 0);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 0);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 3);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 4){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 0);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 0);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 9);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 5){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 0);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 0);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 9);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 6){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 0);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 0);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 9);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 7){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 0);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 0);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 9);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 8){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 0);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 0);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 1);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 9){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 0);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 0);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 9);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}

			if (push_state == 10){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 0);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 0);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 9);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 11){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 0);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 0);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 9);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if(push_state == 12){
			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 0);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 0);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 4);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
				goto cond;

		}
			if (push_state == 13){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 0);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 0);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 3);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 14){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 0);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 6);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 15){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 0);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}



			if(push_state == 16){
			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 9);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 2);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
				goto cond;

		}
			if (push_state == 17){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 9);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 0);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 3);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 18){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 9);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 0);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 9);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 19){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 9);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 0);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 9);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 20){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 9);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 0);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 9);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 21){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 9);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 0);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 9);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 22){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 9);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 0);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 1);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 23){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 9);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 0);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 9);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}

			if (push_state == 24){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 9);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 0);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 9);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 25){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 9);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 0);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 9);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if(push_state == 26){
			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 9);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 0);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 4);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
				goto cond;

		}
			if (push_state == 27){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 9);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 0);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 3);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 28){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 9);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 6);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 29){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 30){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 9);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 31){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 9);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 32){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 9);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 33){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 9);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 34){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 9);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 35){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 9);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 36){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 9);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 37){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 9);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 38){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 9);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 39){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 40){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 1);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 41){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 9);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}if (push_state == 42){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 9);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}if (push_state == 43){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 9);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}if (push_state == 44){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 1);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}if (push_state == 45){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 1);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}if (push_state == 46){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 9);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 47){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 9);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}if (push_state == 48){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 8);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}if (push_state == 49){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 9);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 50){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 9);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 9);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}

	if (push_state == 51){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 9);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 9);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}if (push_state == 52){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 9);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 1);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}if (push_state == 53){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 9);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 1);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}if (push_state == 54){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 9);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 9);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 55){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 9);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 9);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}if (push_state == 56){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 9);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 8);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 57){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 9);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 9);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 1);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 58){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 9);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 9);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 9);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 59){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 9);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 9);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 9);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 60){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 9);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 9);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 9);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 61){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 9);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 9);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 1);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}if (push_state == 62){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 9);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 9);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 1);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 1);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}if (push_state == 62){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 9);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 9);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 1);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 1);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 63){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 9);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 9);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 1);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 1);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 64){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 9);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 9);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 1);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 1);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 1);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 65){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 0);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 0);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 66){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 9);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 9);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 1);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 1);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 1);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 67){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 0);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 0);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 68){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 9);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 9);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 1);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 1);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 1);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 69){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 0);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 0);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 70){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 9);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 9);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 1);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 1);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 1);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}if (push_state == 71){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 0);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 0);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 72){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 9);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 9);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 1);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 1);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 1);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}if (push_state == 73){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 0);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 0);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 74){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 9);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 9);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 1);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 1);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 1);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}if (push_state == 75){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 0);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 0);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 0);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 0);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 0);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 0);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 0);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 0);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}
			if (push_state == 76){

			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, 1);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, 9);
			HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, 9);
			HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, 9);
			HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, 9);
			HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, 1);
			HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, 1);
			HAL_GPIO_WritePin(R8_GPIO_Port, R8_Pin, 1);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, 0);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, 0);
			HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, 0);
			HAL_GPIO_WritePin(C5_GPIO_Port, C5_Pin, 0);
			HAL_GPIO_WritePin(C6_GPIO_Port, C6_Pin, 0);
			HAL_GPIO_WritePin(C7_GPIO_Port, C7_Pin, 0);
			HAL_GPIO_WritePin(C8_GPIO_Port, C8_Pin, 0);
			goto cond;

			}



  }
}

void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  HAL_GPIO_WritePin(GPIOA, R8_Pin|R7_Pin|C2_Pin|R1_Pin
                          |C4_Pin|R6_Pin|R4_Pin|C1_Pin
                          |C5_Pin|C7_Pin|R2_Pin|R3_Pin
                          |C8_Pin, GPIO_PIN_RESET);

  HAL_GPIO_WritePin(GPIOB, R5_Pin|C6_Pin|C3_Pin, GPIO_PIN_RESET);

  GPIO_InitStruct.Pin = R8_Pin|R7_Pin|C2_Pin|R1_Pin
                          |C4_Pin|R6_Pin|R4_Pin|C1_Pin
                          |C5_Pin|C7_Pin|R2_Pin|R3_Pin
                          |C8_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  GPIO_InitStruct.Pin = R5_Pin|C6_Pin|C3_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  GPIO_InitStruct.Pin = push_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(push_GPIO_Port, &GPIO_InitStruct);

  GPIO_InitStruct.Pin = GPIO_PIN_7;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_OD;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

void Error_Handler(void)
{
  __disable_irq();
  while (1)
  {
  }
}
