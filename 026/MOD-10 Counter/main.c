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
		//0
		
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, 1);
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, 1);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 1);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 0);
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, 1);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, 1);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, 1);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, 1);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, 1);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, 1);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, 0);
		HAL_Delay(1000);
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, 1);
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, 1);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 1);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 1);
	//	HAL_Delay(50);
		
		
		//1
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, 1);
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, 1);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 1);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 0);
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, 0);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, 1);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, 1);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, 0);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, 0);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, 0);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, 0);
		HAL_Delay(1000);
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, 1);
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, 1);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 1);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 1);
		//HAL_Delay(50);
		
		
		//2
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, 1);
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, 1);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 1);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 0);
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, 1);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, 1);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, 0);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, 1);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, 1);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, 0);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, 1);
		HAL_Delay(1000);
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, 1);
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, 1);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 1);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 1);
	//	HAL_Delay(50);
		
		
		
		//3
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, 1);
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, 1);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 1);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 0);
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, 1);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, 1);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, 1);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, 1);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, 0);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, 0);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, 1);
		HAL_Delay(1000);
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, 1);
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, 1);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 1);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 1);
//		HAL_Delay(50);
		
		
		
		//4
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, 1);
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, 1);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 1);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 0);
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, 0);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, 1);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, 1);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, 0);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, 0);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, 1);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, 1);
		HAL_Delay(1000);
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, 1);
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, 1);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 1);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 1);
		//HAL_Delay(50);
		
		
		//5
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, 1);
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, 1);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 1);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 0);
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, 1);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, 0);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, 1);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, 1);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, 0);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, 1);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, 1);
		HAL_Delay(1000);
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, 1);
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, 1);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 1);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 1);
	//	HAL_Delay(50);
		
		
		
		
		//6
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, 1);
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, 1);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 1);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 0);
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, 1);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, 0);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, 1);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, 1);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, 1);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, 1);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, 1);
		HAL_Delay(1000);
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, 1);
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, 1);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 1);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 1);
//		HAL_Delay(50);
		
		//7
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, 1);
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, 1);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 1);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 0);
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, 1);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, 1);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, 1);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, 0);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, 0);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, 0);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, 0);
		HAL_Delay(1000);
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, 1);
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, 1);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 1);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 1);
		//HAL_Delay(50);
		
		//8
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, 1);
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, 1);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 1);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 0);
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, 1);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, 1);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, 1);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, 1);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, 1);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, 1);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, 1);
		HAL_Delay(1000);
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, 1);
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, 1);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 1);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 1);
	//	HAL_Delay(50);
		
		//9
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, 1);
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, 1);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 1);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 0);
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, 1);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, 1);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, 1);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, 1);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, 0);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, 1);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, 1);
		HAL_Delay(1000);
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, 1);
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, 1);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 1);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 1);
//		HAL_Delay(50);
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

  HAL_GPIO_WritePin(GPIOA, B_Pin|D3_Pin|D2_Pin|F_Pin
                          |A_Pin|D1_Pin, GPIO_PIN_RESET);

  HAL_GPIO_WritePin(GPIOB, E_Pin|D_Pin|DP_Pin|C_Pin
                          |G_Pin|D4_Pin, GPIO_PIN_RESET);


  GPIO_InitStruct.Pin = B_Pin|D3_Pin|D2_Pin|F_Pin
                          |A_Pin|D1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  GPIO_InitStruct.Pin = E_Pin|D_Pin|DP_Pin|C_Pin
                          |G_Pin|D4_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

void Error_Handler(void)
{
  __disable_irq();
  while (1)
  {
  }
}
