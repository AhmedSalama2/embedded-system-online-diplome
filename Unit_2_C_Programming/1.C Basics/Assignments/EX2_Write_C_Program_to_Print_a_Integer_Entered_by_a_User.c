/***
 ======================================================================================================================
 ** Created on     : Fri Mar 17 2023
 ** Author         : Ahmed Salama
 ** Project_Name   : EX2_Write_C_Program_to_Print_a_Integer_Entered_by_a_User.c
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    char str[30];
    char *ptr;

    printf("Please Enter Integer Number:");
    fflush(stdin);
    fflush(stdout);
    scanf("%s", str);

    num = strtol(str, &ptr, 10);
    printf("The Entered Number %d", num);

    return 0;
}