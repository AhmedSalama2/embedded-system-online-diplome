/***
 ======================================================================================================================
 ** Created on     : Mon, April 10, 2023
 ** Author         : Ahmed Salama
 ** Project_Name   : Lab2_startup.s
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/
.section	.vectors
.word		_stack_top    		/* Set top of Stack */ 
.word		Vector_handler		/* Reset */
.word		Vector_handler		/*  NMI */
.word		Vector_handler		/* HardFault */
.word		Vector_handler		/* BusFault */
.word		Vector_handler		/* UsageFault */
.word		Vector_handler		/* RESERVED */
.word		Vector_handler		/* RESERVED */
.word		Vector_handler		/* RESERVED */
.word		Vector_handler		/* RESERVED */
.word		Vector_handler		/* Debug Monitor */
.word		Vector_handler		/* RESERVED */
.word		Vector_handler		/* PendSV */
.word		Vector_handler		/* SysTick */
.word		Vector_handler		/* WWDG */
.word		Vector_handler		/* PVD */
.word		Vector_handler		/* TAMPER */
.word		Vector_handler		/* RTC */
.word		Vector_handler		/* FLASH */
.word		Vector_handler		/* RCC */


.section .text 
_reset:
	Bl   main
	B    .
.thumb_func
Vector_handler:
	b   _reset

