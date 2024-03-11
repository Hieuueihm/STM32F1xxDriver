/*
 * stm32f1_gpio.c
 *
 *  Created on: Mar 10, 2024
 *      Author: gbmhi
 */
#include "stm32f1_gpio.h"





void GPIO_PeriClockControl(GPIO_RegDef_t* pGPIOx, uint8_t EnorDi){
	if(EnorDi == ENABLE){
		if(pGPIOx == GPIOA){
			GPIOA_CLK_EN();
		}else if(pGPIOx == GPIOB){
			GPIOB_CLK_EN();
		}else if(pGPIOx == GPIOC){
			GPIOC_CLK_EN();
		}else if(pGPIOx == GPIOD){
			GPIOD_CLK_EN();
		}else if(pGPIOx == GPIOE){
			GPIOE_CLK_EN();
		}else if(pGPIOx == GPIOF){
			GPIOF_CLK_EN();
		}else if(pGPIOx == GPIOG){
			GPIOG_CLK_EN();
		}
	}else if(EnorDi == DISABLE){
		if(pGPIOx == GPIOA){
			GPIOA_CLK_DIS();
		}else if(pGPIOx == GPIOB){
			GPIOB_CLK_DIS();
		}else if(pGPIOx == GPIOC){
			GPIOC_CLK_DIS();
		}else if(pGPIOx == GPIOD){
			GPIOD_CLK_DIS();
		}else if(pGPIOx == GPIOE){
			GPIOE_CLK_DIS();
		}else if(pGPIOx == GPIOF){
			GPIOF_CLK_DIS();
		}else if(pGPIOx == GPIOG){
			GPIOG_CLK_DIS();
		}
	}

}


void GPIO_Init(GPIO_Handle_t *pGPIOHandle){
	// enable the peripherals clock

	// 1. configure the mode of gpio pin

	// 2. configure the speed
	// 3. configure the pupd settings
	// 4. configure the
	// 5. configure the alt functionality

}
void GPIO_DeInit(GPIO_RegDef_t *pGPIOx);

uint8_t GPIO_ReadFromInputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber);
uint16_t GPIO_ReadFromInputPort(GPIO_RegDef_t *pGPIOx);

void GPIO_WriteToOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber, uint8_t Value);
void GPIO_WriteToOutputPort(GPIO_RegDef_t *pGPIOx, uint16_t Value);
void GPIO_ToggleOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber);

void GPIO_IRQInterruptConfig(uint8_t IRQNumber, uint8_t EnorDi);
void GPIO_IRQPriorityConfig(uint8_t IRQNumber, uint32_t IRQPriority);
void GPIO_IRQHandling(uint8_t PinNumber);
