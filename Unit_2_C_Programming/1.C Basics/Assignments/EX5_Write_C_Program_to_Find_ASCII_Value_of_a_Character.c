/***
 ======================================================================================================================
 ** Created on     : Fri Mar 17 2023
 ** Author         : Ahmed Salama
 ** Project_Name   : EX5_Write_C_Program_to_Find_ASCII_Value_of_a_Character.c
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/
#include <stdio.h>

int main() {

    char ch;
    printf("please enter character \n");
    fflush(stdin);
    fflush(stdout);
    scanf("%c", &ch);
    printf("ASCII code for character:%d ", ch);

    return 0;
}
