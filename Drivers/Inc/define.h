#include <stdint.h>

#define FLASH_BASEADDR 				0x08000000U
#define SRAM_BASEADDR 				0x20000000U
#define ROM_BASEADDR 				0x1FFF0000U


//define peripherals base address
#define PERIPH_BASEADDR				0x40000000U
#define APB1PERIPH_BASEADDR			PERIPH_BASEADDR
#define APB2PERIPH_BASEADDR			0x40010000U
#define AHBPERIPH_BASEADDR			0x40018000U


// define GPIO base address
#define GPIOA_BASEADDR 				(APB2PERIPH_BASEADDR + 0x0800)
#define GPIOB_BASEADDR 				(APB2PERIPH_BASEADDR + 0x0C00)
#define GPIOC_BASEADDR 				(APB2PERIPH_BASEADDR + 0x1000)
#define GPIOD_BASEADDR 				(APB2PERIPH_BASEADDR + 0x1400)
#define GPIOE_BASEADDR 				(APB2PERIPH_BASEADDR + 0x1800)
#define GPIOF_BASEADDR 				(APB2PERIPH_BASEADDR + 0x1C00)
#define GPIOG_BASEADDR 				(APB2PERIPH_BASEADDR + 0x2000)
#define RCC_BASEADDR 				0x40021000U


#define I2C1_BASEADDR 				(APB1PERIPH_BASEADDR + 0x5400)
#define I2C2_BASEADDR 				(APB2PERIPH_BASEADDR + 0x5800)

#define SPI2_BASEADDR 				(APB1PERIPH_BASEADDR + 0x3800)
#define SPI3_BASEADDR 				(APB1PERIPH_BASEADDR + 0x4000)

#define USART1_BASEADDR 			(APB2PERIPH_BASEADDR + 0x3800)
#define USART2_BASEADDR 			(APB1PERIPH_BASEADDR + 0x4400)
#define USART3_BASEADDR 			(APB1PERIPH_BASEADDR + 0x4800)
#define UART4_BASEADDR 				(APB1PERIPH_BASEADDR + 0x4C00)
#define UART5_BASEADDR 				(APB1PERIPH_BASEADDR + 0x5000)

#define EXTI_BASEADDR 				(APB2PERIPH_BASEADDR + 0x4000)
#define SPI1_BASEADDR 				(APB2PERIPH_BASEADDR + 0x3000)



typedef struct {
	unsigned long MODE_0 	:2;
	unsigned long CNF_0 	:2;
	unsigned long MODE_1 	:2;
	unsigned long CNF_1 	:2;
	unsigned long MODE_2 	:2;
	unsigned long CNF_2 	:2;
	unsigned long MODE_3 	:2;
	unsigned long CNF_3 	:2;
	unsigned long MODE_4 	:2;
	unsigned long CNF_4 	:2;
	unsigned long MODE_5 	:2;
	unsigned long CNF_5 	:2;
	unsigned long MODE_6 	:2;
	unsigned long CNF_6 	:2;
	unsigned long MODE_7 	:2;
	unsigned long CNF_7 	:2;
} CRL_BITS;
typedef struct {
	unsigned long MODE_8 	:2;
	unsigned long CNF_8 	:2;
	unsigned long MODE_9 	:2;
	unsigned long CNF_9 	:2;
	unsigned long MODE_10 	:2;
	unsigned long CNF_10 	:2;
	unsigned long MODE_11 	:2;
	unsigned long CNF_11 	:2;
	unsigned long MODE_12 	:2;
	unsigned long CNF_12 	:2;
	unsigned long MODE_13 	:2;
	unsigned long CNF_13 	:2;
	unsigned long MODE_14 	:2;
	unsigned long CNF_14 	:2;
	unsigned long MODE_15 	:2;
	unsigned long CNF_15 	:2;
} CRH_BITS;
typedef struct {
	unsigned short IDR_0 	:1;
	unsigned short IDR_1 	:1;
	unsigned short IDR_2 	:1;
	unsigned short IDR_3 	:1;
	unsigned short IDR_4 	:1;
	unsigned short IDR_5 	:1;
	unsigned short IDR_6 	:1;
	unsigned short IDR_7 	:1;
	unsigned short IDR_8 	:1;
	unsigned short IDR_9 	:1;
	unsigned short IDR_10 	:1;
	unsigned short IDR_11 	:1;
	unsigned short IDR_12 	:1;
	unsigned short IDR_13 	:1;
	unsigned short IDR_14 	:1;
	unsigned short IDR_15 	:1;
	unsigned short _reserved	:16;
} IDR_BITS;
typedef struct {
	unsigned short IDR_0 	:1;
	unsigned short IDR_1 	:1;
	unsigned short IDR_2 	:1;
	unsigned short IDR_3 	:1;
	unsigned short IDR_4 	:1;
	unsigned short IDR_5 	:1;
	unsigned short IDR_6 	:1;
	unsigned short IDR_7 	:1;
	unsigned short IDR_8 	:1;
	unsigned short IDR_9 	:1;
	unsigned short IDR_10 	:1;
	unsigned short IDR_11 	:1;
	unsigned short IDR_12 	:1;
	unsigned short IDR_13 	:1;
	unsigned short IDR_14 	:1;
	unsigned short IDR_15 	:1;
	unsigned short _reserved	:16;
} ODR_BITS;

typedef struct {
	unsigned short BS_0 : 1;
	unsigned short BS_1 : 1;
	unsigned short BS_2 : 1;
	unsigned short BS_3 : 1;
	unsigned short BS_4 : 1;
	unsigned short BS_5 : 1;
	unsigned short BS_6 : 1;
	unsigned short BS_7 : 1;
	unsigned short BS_8 : 1;
	unsigned short BS_9 : 1;
	unsigned short BS_10 : 1;
	unsigned short BS_11 : 1;
	unsigned short BS_12 : 1;
	unsigned short BS_13 : 1;
	unsigned short BS_14 : 1;
	unsigned short BS_15 : 1;

	unsigned short BR_0 : 1;
	unsigned short BR_1 : 1;
	unsigned short BR_2 : 1;
	unsigned short BR_3 : 1;
	unsigned short BR_4 : 1;
	unsigned short BR_5 : 1;
	unsigned short BR_6 : 1;
	unsigned short BR_7 : 1;
	unsigned short BR_8 : 1;
	unsigned short BR_9 : 1;
	unsigned short BR_10 : 1;
	unsigned short BR_11 : 1;
	unsigned short BR_12 : 1;
	unsigned short BR_13 : 1;
	unsigned short BR_14 : 1;
	unsigned short BR_15 : 1;

} BSRR_BITS;

typedef struct {
	unsigned short BR_0 : 1;
	unsigned short BR_1 : 1;
	unsigned short BR_2 : 1;
	unsigned short BR_3 : 1;
	unsigned short BR_4 : 1;
	unsigned short BR_5 : 1;
	unsigned short BR_6 : 1;
	unsigned short BR_7 : 1;
	unsigned short BR_8 : 1;
	unsigned short BR_9 : 1;
	unsigned short BR_10 : 1;
	unsigned short BR_11 : 1;
	unsigned short BR_12 : 1;
	unsigned short BR_13 : 1;
	unsigned short BR_14 : 1;
	unsigned short BR_15 : 1;
	unsigned short _reserved: 16;
} BSR_BITS;

typedef struct {
	unsigned short LCK_0	: 1;
	unsigned short LCK_1	: 1;
	unsigned short LCK_2	: 1;
	unsigned short LCK_3	: 1;
	unsigned short LCK_4	: 1;
	unsigned short LCK_5	: 1;
	unsigned short LCK_6	: 1;
	unsigned short LCK_7	: 1;
	unsigned short LCK_8	: 1;
	unsigned short LCK_9	: 1;
	unsigned short LCK_10	: 1;
	unsigned short LCK_11	: 1;
	unsigned short LCK_12	: 1;
	unsigned short LCK_13	: 1;
	unsigned short LCK_14	: 1;
	unsigned short LCKK 	: 1;

	unsigned short _reserved	: 15;
} LCKR_BITS;


