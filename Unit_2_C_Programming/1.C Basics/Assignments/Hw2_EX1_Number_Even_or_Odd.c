/***
 ======================================================================================================================
 ** Created on     : 2 Jul 2022
 ** Author         : Ahmed Salama
 ** Project_Name   : Hw2_EX1_Number_Even_or_Odd
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

    printf("Please Enter the Number ");

    fflush(stdin);
    fflush(stdout);
    scanf("%s", str);
    num = strtol(str, &ptr, 10);

    if ((num % 2) == 0) {
        printf("%d is Even Number ", num);
    } else
        printf("%d is Odd Number ", num);
    return 0;
}
