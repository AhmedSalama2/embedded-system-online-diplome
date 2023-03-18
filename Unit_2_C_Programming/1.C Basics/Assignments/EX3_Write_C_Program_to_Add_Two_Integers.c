/***
 ======================================================================================================================
 ** Created on     : Fri Mar 17 2023
 ** Author         : Ahmed Salama
 ** Project_Name   : EX3_Write_C_Program_to_Add_Two_Integers.c
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2;
    char str[30];
    char *ptr;

    printf("Please Enter Two Numbers :");
    fflush(stdin);
    fflush(stdout);
    scanf("%s", str);
    num1 = strtol(str, &ptr, 10);
    scanf("%s", str);
    num2 = strtol(str, &ptr, 10);
    printf("sum:%d", num1 + num2);
}