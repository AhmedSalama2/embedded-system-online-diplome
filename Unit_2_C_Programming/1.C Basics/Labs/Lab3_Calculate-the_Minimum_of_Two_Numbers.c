/***
 ======================================================================================================================
 ** Created on     : 1 July 2022
 ** Author         : Ahmed Salama
 ** Project_Name   : Lab3_Calculate-the_Minimum_of_Two_Numbers.c
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y, z;
    char str[30];
    char *ptr;
    printf("Please Enter 2  Numbers :");

    scanf("%s", str);
    x = strtol(str, &ptr, 10);

    scanf("%s", str);
    y = strtol(str, &ptr, 10);

    z = (x >= y) ? y : x;
    printf("The Minimum number =%d", z);
    return 0;
}
