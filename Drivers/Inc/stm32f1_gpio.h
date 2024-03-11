/*
 * stm3f1_gpio.h
 *
 *  Created on: Mar 10, 2024
 *      Author: gbmhi
 */

#ifndef INC_STM32F1_GPIO_H_
#define INC_STM32F1_GPIO_H_

#include "stm32f1.h"
#define GPIO_PIN_NO_0		0
#define GPIO_PIN_NO_1		1
#define GPIO_PIN_NO_2		2
#define GPIO_PIN_NO_3		3
#define GPIO_PIN_NO_4		4
#define GPIO_PIN_NO_5		5
#define GPIO_PIN_NO_6		6
#define GPIO_PIN_NO_7		7
#define GPIO_PIN_NO_8		8
#define GPIO_PIN_NO_9		9
#define GPIO_PIN_NO_10		10
#define GPIO_PIN_NO_11		11
#define GPIO_PIN_NO_12		12
#define GPIO_PIN_NO_13		13
#define GPIO_PIN_NO_14		14
#define GPIO_PIN_NO_15		15



typedef struct {
	uint8_t GPIO_PinNumber;
	uint8_t GPIO_PinMode;
	uint8_t GPIO_PinSpeed;
	uint8_t GPIO_PinPuPdControl;
	uint8_t GPIO_PinOPType;
	uint8_t GPIO_PinAltFunMode;
} GPIO_PinConfig_t;

typedef struct {
	GPIO_RegDef_t *pGPIOx;
	GPIO_PinConfig_t GPIO_PinConfig;
} GPIO_Handle_t;


// CRL & CRH define
#define GPIO_CNF_ANALOG 0
#define GPIO_CNF_FLOATING_INPUT 1
#define GPIO_CNF_PUPD 2
#define GPIO_CNF_RESERVED 3

#define GPIO_CNF_GPIO_PUPU 0
#define GPIO_CNF_GPIO_OPEN_DRAIN 1
#define GPIO_CNF_ALT_PUPU 2
#define GPIO_CNF_ALT_OPEN_DRAIN 2

#define GPIO_INPUT_MODE 0
#define GPIO_OUTPUT_MODE_10M 1
#define GPIO_OUTPUT_MODE_2M 2
#define GPIO_OUTPUT_MODE_50M 3








void GPIO_PeriClockControl(GPIO_RegDef_t* pGPIOx, uint8_t EnorDi);
void GPIO_Init(GPIO_Handle_t *pGPIOHandle);
void GPIO_DeInit(GPIO_RegDef_t *pGPIOx);

uint8_t GPIO_ReadFromInputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber);
uint16_t GPIO_ReadFromInputPort(GPIO_RegDef_t *pGPIOx);

void GPIO_WriteToOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber, uint8_t Value);
void GPIO_WriteToOutputPort(GPIO_RegDef_t *pGPIOx, uint16_t Value);
void GPIO_ToggleOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber);

void GPIO_IRQInterruptConfig(uint8_t IRQNumber, uint8_t EnorDi);
void GPIO_IRQPriorityConfig(uint8_t IRQNumber, uint32_t IRQPriority);
void GPIO_IRQHandling(uint8_t PinNumber);



#endif /* INC_STM32F1_GPIO_H_ */
