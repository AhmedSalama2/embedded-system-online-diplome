/***
 ======================================================================================================================
 ** Created on     : Fri Mar 17 2023
 ** Author         : Ahmed Salama
 ** Project_Name   : EX6_Write_Source_Code_to_Swap_Two_Numbers.c
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, temp;
    char str[30];
    char *ptr;
    printf("Please Enter A Number\n");
    fflush(stdin);
    fflush(stdout);
    scanf("%s", str);
    num1 = strtol(str, &ptr, 10);

    printf("Please Enter B Number \n");
    fflush(stdin);
    fflush(stdout);
    scanf("%s", str);

    num2 = strtol(str, &ptr, 10);
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf(" A Number:%d \n", num1);
    printf(" B Number:%d \n", num2);
}