/***
 ======================================================================================================================
 ** Created on     : 1 Jul 2022
 ** Author         : Ahmed Salama
 ** Project_Name   : Lab4_Calculate_the_Summation_of_values between_1_and _99.c
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/


#include <stdio.h>

int main() {
    int sum = 0, i;

    for (i = 0; i <= 99; ++i) {
        sum += i;
    }

    printf("Summation for Number from 1 to 99=%d", sum);

    return 0;
}
