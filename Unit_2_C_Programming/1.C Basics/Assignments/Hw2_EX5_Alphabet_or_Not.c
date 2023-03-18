/***
 ======================================================================================================================
 ** Created on     : 2 Jul 2022
 ** Author         : Ahmed Salama
 ** Project_Name   : Hw2_EX5_Alphabet_or_Not.c
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/

#include <stdio.h>

int main() {
    char x;
    printf("Please Enter Character: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%c", &x);
    if ((x >= 'A') && x <= 'z') {
        printf("%c is an alphabet", x);
    } else {
        printf("%c is not an alphabet", x);
    }
    return 0;
}
