/***
 ======================================================================================================================
 ** Created on     : Thu Mar 30 2023
 ** Author         : Ahmed Salama
 ** Project_Name   : uart.c
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/
#include "uart.h"

void UART_SEND_STRING(const char *P_String) {
    /*send Data until reach null character */
    while (*P_String != '\0') {
        UART0DR = (unsigned int)*P_String;
        /*update pointer to next  character*/
        P_String++;
    }
}
