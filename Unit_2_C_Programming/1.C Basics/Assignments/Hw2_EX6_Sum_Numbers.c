/***
 ======================================================================================================================
 ** Created on     : 2 Jul 2022
 ** Author         : Ahmed Salama
 ** Project_Name   : Hw2_EX6_Sum_Numbers.c
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    long int sum = 0;
    char str[30];
    char *ptr;


    printf("Please Enter The Number: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%s", str);
    num = strtol(str, &ptr, 10);
    fflush(stdin);
    fflush(stdout);
    int i;
    for (i = 1; i <= num; ++i) {
        sum += i;
    }
    printf("The Summation :%ld", sum);
    return 0;
}
