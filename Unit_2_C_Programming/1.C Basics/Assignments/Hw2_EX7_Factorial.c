/***
  ======================================================================================================================
  ** Created on     : 2 Jul 2022
  ** Author         : Ahmed Salama
  ** Project_Name   : Hw2_EX7_Factorial.c
  ** C_Standard     : Ansi C _Std C89
  ** Course_Name    : Learn in Depth
  ** E_mail         : ahmedslamaaa934@gmail.com
  ======================================================================================================================
  ***/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    long int sum = 1;
    char str[30];
    char *ptr;

    printf("Enter an integer: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%s", str);
    num = strtol(str, &ptr, 10);

    if (num >= 0) {
        int i;
        for (i = 1; i <= num; ++i) {
            sum *= i;
        }
    } else if (num < 0) {
        printf("Error ! ! ! Factorial of negative number doesn't exist");
    }
    printf("Factorial =%ld", sum);

    return 0;
}
