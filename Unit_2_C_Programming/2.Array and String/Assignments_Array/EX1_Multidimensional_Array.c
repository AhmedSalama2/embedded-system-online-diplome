/***
 ======================================================================================================================
 ** Created on     : 5 Jul 2022
 ** Author         : Ahmed Salama
 ** Project_Name   : EX1_Multidimensional_Array
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float x[2][2];
    float y[2][2];
    char str[30];
    char *ptr;
    int i, j;
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 2; ++j) {
            printf("PLEASE ENTER NUMBER for first matrix(%d)(%d):", i + 1, j + 1);
            fflush(stdin);
            fflush(stdout);
            scanf("%s", str);
            x[i][j] = strtof(str, &ptr);
        }
    }
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 2; ++j) {
            printf("PLEASE ENTER NUMBER for second matrix(%d)(%d):", i + 1, j + 1);
            fflush(stdin);
            fflush(stdout);
            scanf("%s", str);
            x[i][j] = strtof(str, &ptr);
        }
    }
    printf("sum of two matrices :\n");
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 2; ++j) {
            printf("%f  ", (x[i][j] + y[i][j]));
        }
        printf("\n");
    }
    return 0;
}
