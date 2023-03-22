/***
 ======================================================================================================================
 ** Created on     : 30 Jul 2022s
 ** Author         : Ahmed Salama
 ** Project_Name   : Lab4_Triangle_Making.c
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/

#include <stdio.h>

void shape(int x) {
    int i, j;
    for (i = 0; i <= x; ++i) {
        for (j = 0; i + j <= x; ++j) {
            printf("%d ", j + i);
        }
        printf("\n");
    }
}

int main() {
    shape(10);
    return 0;
}
