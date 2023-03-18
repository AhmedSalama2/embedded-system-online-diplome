/***
 ======================================================================================================================
 ** Created on     : 2 Jul 2022
 ** Author         : Ahmed Salama
 ** Project_Name   : Hw2_EX3_Largest_Number.c
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/
#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2, num3;
    char str[30];
    char *ptr;

    printf("Please Enter 3 Numbers: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%s", str);
    num1 = strtof(str, &ptr);

    scanf("%s", str);
    num2 = strtof(str, &ptr);

    scanf("%s", str);
    num3 = strtof(str, &ptr);

    if (num1 >= num2 && num1 >= num3) {
        printf("the largest number is %f", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("the largest number is %f", num2);

    } else {
        printf("the largest number is %f", num3);
    }

    return 0;
}
