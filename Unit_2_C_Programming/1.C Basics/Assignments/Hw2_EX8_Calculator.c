/***
 ======================================================================================================================
 ** Created on     : 3 Jul 2022
 ** Author         : Ahmed Salama
 ** Project_Name   : Hw2_EX8_Calculator.c
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch;
    char str[30];
    char *ptr;

    printf("Enter operator either + or - or * or divide : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%c", &ch);
    int num1, num2;

    printf("Enter two operands: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%s", str);
    num1 = strtol(str, &ptr, 10);

    scanf("%s", str);
    num2 = strtol(str, &ptr, 10);
    switch (ch) {
    case '*':
        printf("%d * %d =%d", num1, num2, num1 * num2);
        break;
    case '/':
        printf("%d / %d =%d", num1, num2, num1 / num2);
        break;
    case '+':
        printf("%d + %d =%d", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%d - %d =%d", num1, num2, num1 - num2);
        break;
    default:
        printf("wrong operator !");
        break;
    }
    return 0;
}
