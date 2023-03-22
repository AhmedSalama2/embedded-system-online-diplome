/***
 ======================================================================================================================
 ** Created on     : 8 Jul 2022
 ** Author         : Ahmed Salama
 ** Project_Name   : EX2_Length_of_String.c
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/

#include <stdio.h>

int main() {
    char c[100];
    int i;

    printf("Enter a string: ");
    fflush(stdin);
    fflush(stdout);
    fgets(c, sizeof(c), stdin);
    for (i = 0; c[i] != '\0'; ++i)
        ;
    printf("Length of string: %d", i);
    return 0;
}
