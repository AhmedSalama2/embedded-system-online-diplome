/***
 ======================================================================================================================
 ** Created on     : Mon, Mar 27, 2023
 ** Author         : Ahmed Salama
 ** Project_Name   : Toggle_Led
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/

#include <stdint.h>
#include "Platform_types.h"

#define  RCC_BASE       0x40021000  /* Reset and clock control*/
#define  GPIOA_BASE     0x40010800  /* GPIO Port A*/
#define  RCC_APB2ENR    *((vuint32*)(RCC_BASE+0x18))
#define  GPIOA_CRH      *((vuint32*)(GPIOA_BASE+0x04))
#define  GPIOA_ODR      *((vuint32*)(GPIOA_BASE+0x0C))
/*Bit_Fields*/
#define  RCC_IOPAEN		(1u<<2)

typedef union {
	vuint32 All_Fields;
	struct {
		vuint32 reseved :13;
		vuint32 pin_13 :1;
	} pins;
} R_SODR_t;
volatile R_SODR_t *R_ODR = (volatile R_SODR_t*) ( GPIOA_BASE + 0x0C);/*Struct pointer to GPOIA_ODR*/
int main(void)

{
	/*Enable Clock for GPIO Port A*/
	RCC_APB2ENR |= RCC_IOPAEN;
	/*Reset Clock Register For GPIO Port A for Safety*/
	GPIOA_CRH &= 0xff0fffff;
	/*Set Clock Register For GPIO Port A*/
	GPIOA_CRH |= 0x00200000;
	int i; /*iterator*/
	while (TRUE) {
		/*Set Led on */
		R_ODR->pins.pin_13 = 1;
		for (i = 0; i < 5000; ++i)
			; /*arbitrary delay */
		/*Set Led off */
		R_ODR->pins.pin_13 = 0;
		for (i = 0; i < 5000; ++i)
			; /*arbitrary delay */

	}
}
