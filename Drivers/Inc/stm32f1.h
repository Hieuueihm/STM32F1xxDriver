#include <define.h>
#ifndef INC_STM32F103XX_H_
#define INC_STM32F103XX_H_


#define __vo volatile


typedef struct {
	union {
		__vo unsigned long REG;
		CRL_BITS BITS;
	} CRL;
	union{
		__vo unsigned long REG;
		CRH_BITS BITS;
	} CRH;
	union{
		__vo unsigned long REG;
		IDR_BITS BITS;
	} IDR;
	union{
		__vo unsigned long REG;
		ODR_BITS BITS;
	} ODR;
	union {
		__vo unsigned long REG;
		BSRR_BITS BITS;
	} BSRR;

	union{
		__vo unsigned long REG;
		BSR_BITS BITS;
	} BSR;
	union{
		__vo unsigned long REG;
		LCKR_BITS BITS;
	} LCKR;
} GPIO_RegDef_t;

#define GPIOA ((GPIO_RegDef_t *)GPIOA_BASEADDR)
#define GPIOB ((GPIO_RegDef_t *)GPIOB_BASEADDR)
#define GPIOC ((GPIO_RegDef_t *)GPIOC_BASEADDR)
#define GPIOD ((GPIO_RegDef_t *)GPIOD_BASEADDR)
#define GPIOE ((GPIO_RegDef_t *)GPIOE_BASEADDR)
#define GPIOF ((GPIO_RegDef_t *)GPIOF_BASEADDR)
#define GPIOG ((GPIO_RegDef_t *)GPIOG_BASEADDR)


typedef struct {
	__vo unsigned long CR;
	__vo unsigned long CFGR;
	__vo unsigned long CIR;
	__vo unsigned long APB2RSTR;
	__vo unsigned long APB1RSTR;
	__vo unsigned long AHBENR;
	__vo unsigned long APB2ENR;
	__vo unsigned long APB1ENR;
	__vo unsigned long BDCR;
	__vo unsigned long CSR;
} RCC_RegDef_t;

#define RCC ((RCC_RegDef_t *)RCC_BASEADDR)

typedef struct {
	__vo unsigned long IMR;
	__vo unsigned long EMR;
	__vo unsigned long RTSR;
	__vo unsigned long FTSR;
	__vo unsigned long SWIER;
	__vo unsigned long PR;
} EXTI_RegDef_t;

#define EXTI ((EXTI_RegDef_t*)EXTI_BASEADDR)

typedef struct {
	__vo unsigned long CR1;
	__vo unsigned long CR2;
	__vo unsigned long SR;
	__vo unsigned long DR;
	__vo unsigned long CRCPR;
	__vo unsigned long RXCRCR;
	__vo unsigned long TXCRCR;
	__vo unsigned long I2SCFGR;
	__vo unsigned long I2SPR;


} SPI_RegDeg_t;

#define SPI1 ((SPI_RegDef_t*) SPI1_BASEADDR)
#define SPI2 ((SPI_RegDef_t*) SPI2_BASEADDR)
#define SPI3 ((SPI_RegDef_t*) SPI3_BASEADDR)




typedef struct {
	__vo unsigned long CR1;
	__vo unsigned long CR2;
	__vo unsigned long OAR1;
	__vo unsigned long DR;
	__vo unsigned long SR1;
	__vo unsigned long SR2;
	__vo unsigned long CCR;
	__vo unsigned long TRISE;
} I2C_RegDef_t;

#define I2C1 ((I2C_RegDef_t*) I2C1_BASEADDR)
#define I2C2 ((I2C_RegDef_t*) I2C2_BASEADDR)

typedef struct {
	__vo unsigned long SR;
	__vo unsigned long DR;
	__vo unsigned long BRR;
	__vo unsigned long CR1;
	__vo unsigned long CR2;
	__vo unsigned long CR3;
	__vo unsigned long GTPR;

} USART_RegDef_t;
#define USART1 ((USART_RegDef_t*) USART1_BASEADDR)
#define USART2 ((USART_RegDef_t*) USART2_BASEADDR)
#define USART3 ((USART_RegDef_t*) USART3_BASEADDR)
#define UART4 ((USART_RegDef_t *) UART4_BASEADDR)
#define UART5 ((USART_RegDef_t *) UART5_BASEADDR)


// clock enable macros

#define GPIOA_CLK_EN() (RCC->APB2ENR |= (1 << 2))
#define GPIOB_CLK_EN() (RCC->APB2ENR |= (1 << 3))
#define GPIOC_CLK_EN() (RCC->APB2ENR |= (1 << 4))
#define GPIOD_CLK_EN() (RCC->APB2ENR |= (1 << 5))
#define GPIOE_CLK_EN() (RCC->APB2ENR |= (1 << 6))
#define GPIOF_CLK_EN() (RCC->APB2ENR |= (1 << 7))
#define GPIOG_CLK_EN() (RCC->APB2ENR |= (1 << 8))

#define USART1_CLK_EN() (RCC->APB2ENR |= (1 << 14))
#define USART2_CLK_EN() (RCC->APB1ENR |= (1 << 17))
#define USART3_CLK_EN()	(RCC->APB1ENR |= (1 << 18))
#define UART4_CLK_EN() (RCC->APB1ENR |= (1 << 19))
#define UART5_CLK_EN() (RCC->APB1ENR |= (1 << 20))

#define I2C1_CLK_EN() (RCC->APB1ENR |= (1 << 21))
#define I2C2_CLK_EN() (RCC->APB1ENR |= (1 << 22))

#define SPI1_CLK_EN() (RCC->APB1ENR |= (1 << 14))
#define SPI2_CLK_EN() (RCC->APB1ENR |= (1 << 15))

// clock disable macros

#define GPIOA_CLK_DIS() (RCC->APB2ENR &=~ (1 << 2))
#define GPIOB_CLK_DIS() (RCC->APB2ENR &=~ (1 << 3))
#define GPIOC_CLK_DIS() (RCC->APB2ENR &=~ (1 << 4))
#define GPIOD_CLK_DIS() (RCC->APB2ENR &=~ (1 << 5))
#define GPIOE_CLK_DIS() (RCC->APB2ENR &=~(1 << 6))
#define GPIOF_CLK_DIS() (RCC->APB2ENR &=~ (1 << 7))
#define GPIOG_CLK_DIS() (RCC->APB2ENR &=~ (1 << 8))
#define USART1_CLK_DIS() (RCC->APB2ENR &=~ (1 << 14))
#define USART2_CLK_DIS()	(RCC->APB1ENR &=~ (1 << 17))
#define USART3_CLK_DIS()	(RCC->APB1ENR &=~ (1 << 18))
#define UART4_CLK_DIS() (RCC->APB1ENR &=~ (1 << 19))
#define UART5_CLK_DIS() (RCC->APB1ENR &=~ (1 << 20))
#define I2C1_CLK_DIS() (RCC->APB1ENR &=~ (1 << 21))
#define I2C2_CLK_DIS() (RCC->APB1ENR &=~ (1 << 22))
#define SPI1_CLK_DIS() (RCC->APB1ENR &=~ (1 << 14))
#define SPI2_CLK_DIS() (RCC->APB1ENR &=~ (1 << 15))

#define ENABLE 1
#define DISABLE 0
#define SET ENABLE
#define RESET DISABLE
#define GPIO_PIN_SET SET
#define GPIO_PIN_RESET RESET
#define FLAG_RESET RESET
#define FLAG_SET SET


#endif
