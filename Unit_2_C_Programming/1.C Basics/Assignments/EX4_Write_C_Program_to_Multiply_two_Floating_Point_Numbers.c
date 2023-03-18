/***
 ======================================================================================================================
 ** Created on     : Fri Mar 17 2023
 ** Author         : Ahmed Salama
 ** Project_Name   : EX4_Write_C_Program_to_Multiply_two_Floating_Point_Numbers.c
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/
#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2;
    char str[30];
    char *ptr;

    printf("Please Enter Two Numbers :");
    fflush(stdin);
    fflush(stdout);
    scanf("%s", str);
    num1 = strtof(str, &ptr);
    scanf("%s", str);
    num2 = strtof(str, &ptr);
    printf("Product:%f", num1 * num2);
}