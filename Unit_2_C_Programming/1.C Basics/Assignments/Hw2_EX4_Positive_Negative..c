/***
 ======================================================================================================================
 ** Created on     : 2 Jul 2022
 ** Author         : Ahmed Salama
 ** Project_Name   : Hw2_EX4_Positive_Negative.c
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float num;
    char str[30];
    char *ptr;
    printf("please enter the number ");
    fflush(stdin);
    fflush(stdout);
    scanf("%s", str);
    num = strtof(str, &ptr);

    if (num > 0) {
        printf("%f is positive", num);
    } else if (num < 0) {
        printf("%f is negative", num);
    } else {
        printf("%f is equal zero", num);
    }

    return 0;
}
