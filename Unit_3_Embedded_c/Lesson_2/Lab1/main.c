/***
 ======================================================================================================================
 ** Created on     : Thu Mar 30 2023
 ** Author         : Ahmed Salama
 ** Project_Name   : main.c
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/
#include "uart.h"
/*Register Define*/
unsigned char Buffer[100] = "Learn in Depth <Ahmed Salama>";

void main(void) {
    /*using of uart_send Function*/
    UART_SEND_STRING(Buffer);
}