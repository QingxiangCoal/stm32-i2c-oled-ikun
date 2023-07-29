/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "i2c.h"
#include "gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "OLED.h"
#include "KUNKUN.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */

int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_I2C1_Init();
  /* USER CODE BEGIN 2 */
  OLED_Init();
  OLED_Fill(0xff);
  HAL_Delay(500);
  OLED_Fill(0x00);
  OLED_ShowString(2, 4, "OLED START");
  HAL_Delay(1000);
  OLED_Fill(0x00);
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */
	  Show_Bmp(0,0,64,64,(unsigned char*)BMP1); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP2); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP3); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP4); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP5); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP6); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP7); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP8); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP9); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP10); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP11); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP12); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP13); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP14); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP15); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP16); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP17); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP18); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP19); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP20); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP21); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP22); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP23); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP24); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP25); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP26); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP27); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP28); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP29); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP30); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP31); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP32); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP33); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP34); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP35); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP36); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP37); HAL_Delay(50);
	  			Show_Bmp(0,0,64,64,(unsigned char*)BMP38); HAL_Delay(50);
    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.HSEPredivValue = RCC_HSE_PREDIV_DIV1;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL9;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
