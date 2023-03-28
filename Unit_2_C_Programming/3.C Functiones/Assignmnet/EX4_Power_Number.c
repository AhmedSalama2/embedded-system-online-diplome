/***
 ======================================================================================================================
 ** Created on     : 31 Jul 2022
 ** Author         : Ahmed Salama
 ** Project_Name   : EX4_Power_Number
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/

#include <stdio.h>
#include <stdlib.h>
int power(int x, int y);

int main() {
    char buf[30];
    int base, exp;
    printf(" Enter base number: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%s", buf);
    base = strtol(buf, NULL, 10);
    printf(" Enter power number(positive integer): ");
    fflush(stdin);
    fflush(stdout);
    scanf("%s", buf);
    exp = strtol(buf, NULL, 10);
    printf("%d^%d = %d ", base, exp, power(base, exp));
    return 0;
}

int power(int x, int y) {
    if (y != 0)
        return (x * power(x, y - 1));

    else
        return 1;
}
