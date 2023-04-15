/***
 ======================================================================================================================
 ** Created on     : Thu Mar 30 2023
 ** Author         : Ahmed Salama
 ** Project_Name   : uart.h
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/
#ifndef UART_H_
#define UART_H_ /*header protect*/

#define UART0DR *((volatile unsigned int *)((unsigned int *)0x101f1000))

void UART_SEND_STRING(const char *P_String);

#endif