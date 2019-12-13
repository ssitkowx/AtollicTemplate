/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  ** This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * COPYRIGHT(c) 2019 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H__
#define __MAIN_H__

/* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define LCD_PC13_Pin GPIO_PIN_13
#define LCD_PC13_GPIO_Port GPIOC
#define LCD_PC14_Pin GPIO_PIN_14
#define LCD_PC14_GPIO_Port GPIOC
#define LCD_PC15_Pin GPIO_PIN_15
#define LCD_PC15_GPIO_Port GPIOC
#define LCD_PC0_Pin GPIO_PIN_0
#define LCD_PC0_GPIO_Port GPIOC
#define LCD_PC1_Pin GPIO_PIN_1
#define LCD_PC1_GPIO_Port GPIOC
#define LCD_PC2_Pin GPIO_PIN_2
#define LCD_PC2_GPIO_Port GPIOC
#define LCD_PC3_Pin GPIO_PIN_3
#define LCD_PC3_GPIO_Port GPIOC
#define LCD_Y_Pin GPIO_PIN_0
#define LCD_Y_GPIO_Port GPIOA
#define LCD_X_Pin GPIO_PIN_1
#define LCD_X_GPIO_Port GPIOA
#define LCD_YA2_Pin GPIO_PIN_2
#define LCD_YA2_GPIO_Port GPIOA
#define LCD_XA3_Pin GPIO_PIN_3
#define LCD_XA3_GPIO_Port GPIOA
#define LCD_PC4_Pin GPIO_PIN_4
#define LCD_PC4_GPIO_Port GPIOC
#define LCD_PC5_Pin GPIO_PIN_5
#define LCD_PC5_GPIO_Port GPIOC
#define RFM_NIRQ_Pin GPIO_PIN_0
#define RFM_NIRQ_GPIO_Port GPIOB
#define PB1_Pin GPIO_PIN_1
#define PB1_GPIO_Port GPIOB
#define PB2_Pin GPIO_PIN_2
#define PB2_GPIO_Port GPIOB
#define PB12_Pin GPIO_PIN_12
#define PB12_GPIO_Port GPIOB
#define PB13_Pin GPIO_PIN_13
#define PB13_GPIO_Port GPIOB
#define LED_STCP_Pin GPIO_PIN_14
#define LED_STCP_GPIO_Port GPIOB
#define LED_DATA_Pin GPIO_PIN_15
#define LED_DATA_GPIO_Port GPIOB
#define LCD_PC6_Pin GPIO_PIN_6
#define LCD_PC6_GPIO_Port GPIOC
#define LCD_PC7_Pin GPIO_PIN_7
#define LCD_PC7_GPIO_Port GPIOC
#define LCD_PC8_Pin GPIO_PIN_8
#define LCD_PC8_GPIO_Port GPIOC
#define LCD_PC9_Pin GPIO_PIN_9
#define LCD_PC9_GPIO_Port GPIOC
#define PA8_Pin GPIO_PIN_8
#define PA8_GPIO_Port GPIOA
#define LED_SHCP_Pin GPIO_PIN_10
#define LED_SHCP_GPIO_Port GPIOA
#define LCD_CS_Pin GPIO_PIN_15
#define LCD_CS_GPIO_Port GPIOA
#define LCD_PC10_Pin GPIO_PIN_10
#define LCD_PC10_GPIO_Port GPIOC
#define LCD_PC11_Pin GPIO_PIN_11
#define LCD_PC11_GPIO_Port GPIOC
#define LCD_PC12_Pin GPIO_PIN_12
#define LCD_PC12_GPIO_Port GPIOC
#define LCD_RS_Pin GPIO_PIN_2
#define LCD_RS_GPIO_Port GPIOD
#define LCD_WR_Pin GPIO_PIN_4
#define LCD_WR_GPIO_Port GPIOB
#define LCD_RD_Pin GPIO_PIN_5
#define LCD_RD_GPIO_Port GPIOB
#define A_INT2_Pin GPIO_PIN_8
#define A_INT2_GPIO_Port GPIOB
#define A_INT1_Pin GPIO_PIN_9
#define A_INT1_GPIO_Port GPIOB

/* ########################## Assert Selection ############################## */
/**
  * @brief Uncomment the line below to expanse the "assert_param" macro in the 
  *        HAL drivers code
  */
/* #define USE_FULL_ASSERT    1U */

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
 extern "C" {
#endif
void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)
#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
