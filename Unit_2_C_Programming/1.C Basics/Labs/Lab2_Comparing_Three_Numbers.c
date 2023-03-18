/***
 ======================================================================================================================
 ** Created on     : 30 Jun 2022
 ** Author         : Ahmed Salama
 ** Project_Name   : Lab2_Comparing_Three_Numbers.c
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y, z;
    char *ptr;
    char str[20];

    printf("Please Enter First Number :\n");
    scanf("%s", str);
    x = strtol(str, &ptr, 10);

    printf("Please Enter Second Number :\n");
    scanf("%s", str);
    y = strtol(str, &ptr, 10);

    printf("Please Enter Third Number :\n");
    scanf("%s", str);
    z = strtol(str, &ptr, 10);

    if (x >= y && x >= z) {
        printf("The Largest Number : %d", x);
    } else if (y >= x && y >= z) {
        printf("The Largest Number : %d", y);

    } else {
        printf("The Largest Number : %d", z);
    }

    return 0;
}
