
/***
 ======================================================================================================================
 ** Created on     : 24 Jun 2022
 ** Author         : Ahmed Salama
 ** Project_Name   : Lab1_Calculate_Circle_Area_or_Circumference.c
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/

#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

int main() {
    char choice;
    float Radius;
    double result;
    char str[30];
    char *ptr;

    printf("Please Enter Radius of Circle: ");
    scanf("%s", str);
    Radius = strtof(str, &ptr);

    fflush(stdin);
    fflush(stdout);

    printf(" Please Enter if area Enter a and if circumference of circle  Enter c: ");
    scanf("%c", &choice);

    /*Choose  Area or Circumference */
    if (choice == 'a') {
        /*Area Calculation*/
        result = Radius * Radius * pi;
        printf("the area  of  circle = %lf", result);
    } else if (choice == 'c') {
        /* Circumference Calculation */
        result = 2 * Radius * pi;
        printf("The Circumference  of  Circle = %lf", result);
    } else {
        printf("Error");
    }

    return 0;
}
