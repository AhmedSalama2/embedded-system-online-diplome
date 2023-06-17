/***
 ======================================================================================================================
 ** Created on     : Sat, April 22, 2023
 ** Author         : Ahmed Salama
 ** Project_Name   : Toggle_Led_tiva_c
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/

#include <stdint.h>
#include "Platform_types.h"
/*Define Used Resgister*/

#define     		SYSCTL_RCGC2_R   		   		(*((uint32*)0x400FE108))
#define     		GPIO_PORTF_DIR_R 		   		(*((uint32*)0x40025400))
#define     		GPIO_PORTF_DEN_R 		   		(*((uint32*)0x4002551C))
#define     		GPIO_PORTF_DATA_R		   		(*((uint32*)0x400253FC))


int main(void)

{
	vuint32 delay;/*Delay_iterator*/
	/*Enable Clock for GPIO Port F*/
	SYSCTL_RCGC2_R=0x00000020;
	for(delay=0;delay<400;++delay);

	/*Enable Pin 3  for GPIO Port F*/
	GPIO_PORTF_DEN_R |= 1<<3;
	
	/*Set Pin 3 as Output for GPIO Port F*/
	GPIO_PORTF_DIR_R |= 1<<3;
	while (TRUE) {
		/*Set Led on */
		GPIO_PORTF_DATA_R|=1<<3;
		for (delay = 0; delay < 5000; ++delay)
			; /*arbitrary delay */
		/*Set Led off */
		GPIO_PORTF_DATA_R &=~(1<<3);
		for (delay = 0; delay < 5000; ++delay)
			; /*arbitrary delay */

	}
}
