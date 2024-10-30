/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    usart.h
  * @brief   This file contains all the function prototypes for
  *          the usart.c file
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __USART_H__
#define __USART_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

extern UART_HandleTypeDef huart1;

/* USER CODE BEGIN Private defines */
extern uint8_t rx1_buffer[256]; //接收数据缓存数组
extern uint8_t tx1_len ; 		//发送一帧数据的长度
extern uint8_t rx1_len ; 		//接收一帧数据的长度
extern uint8_t tram1_end_flag;  //一帧数据接发送成标志
extern uint8_t recv1_end_flag;  //一帧数据接收完成标志

//extern uint8_t tx2_buffer[256]; //发送数据缓存数组
//extern uint8_t rx2_buffer[256]; //接收数据缓存数组
//extern uint8_t tx2_len ;  		//发送一帧数据的长度
//extern uint8_t rx2_len ;  		//接收一帧数据的长度
//extern uint8_t tram2_end_flag;  //一帧数据接发送成标志
//extern uint8_t recv2_end_flag;  //一帧数据接收完成标志
//
//extern uint8_t tx3_buffer[256]; //发送数据缓存数组
//extern uint8_t rx3_buffer[256]; //接收数据缓存数组
//extern uint8_t tx3_len ;  		//发送一帧数据的长度
//extern uint8_t rx3_len ;  		//接收一帧数据的长度
//extern uint8_t tram3_end_flag;  //一帧数据接发送成标志
//extern uint8_t recv3_end_flag;  //一帧数据接收完成标志
//
//extern uint8_t tx4_buffer[256]; //发送数据缓存数组
//extern uint8_t rx4_buffer[256]; //接收数据缓存数组
//extern uint8_t tx4_len ;  		//发送一帧数据的长度
//extern uint8_t rx4_len ;  		//接收一帧数据的长度
//extern uint8_t tram4_end_flag;  //一帧数据接发送成标志
//extern uint8_t recv4_end_flag;  //一帧数据接收完成标志
//
//extern uint8_t tx5_buffer[256]; //发送数据缓存数组
//extern uint8_t rx5_buffer[256]; //接收数据缓存数组
//extern uint8_t tx5_len ; 		//发送一帧数据的长度
//extern uint8_t rx5_len ; 		//接收一帧数据的长度
//extern uint8_t tram5_end_flag;  //一帧数据接发送成标志
//extern uint8_t recv5_end_flag;  //一帧数据接收完成标志
//
//extern uint8_t tx6_buffer[256]; //发送数据缓存数组
//extern uint8_t rx6_buffer[256]; //接收数据缓存数组
//extern uint8_t tx6_len ; 		//发送一帧数据的长度
//extern uint8_t rx6_len ; 		//接收一帧数据的长度
//extern uint8_t tram6_end_flag;  //一帧数据接发送成标志
//extern uint8_t recv6_end_flag;  //一帧数据接收完成标志
/* USER CODE END Private defines */

void MX_USART1_UART_Init(void);

/* USER CODE BEGIN Prototypes */

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __USART_H__ */

