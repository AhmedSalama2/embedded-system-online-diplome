/***
 ======================================================================================================================
 ** Created on     : 5 Jul 2022
 ** Author         : Ahmed Salama
 ** Project_Name   : Lab3_Calculate_and_Print_the_Transpose_of_3x3_Matrix 
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float x[3][3];
    float t[3][3];
    int i, j;
    char str[30];
    char *ptr;

    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            printf("PLEASE ENTER NUMBER (%d)(%d):", i + 1, j + 1);
            fflush(stdin);
            fflush(stdout);
            scanf("%s", str);
            x[i][j] = strtof(str, &ptr);
        }
    }
    printf("the matrix is :\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            printf("%f", x[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            t[j][i] = x[i][j];
        }
    }
    printf("the transpose matrix :\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            printf("%f", t[i][j]);
        }
        printf("\n");
    }
    return 0;
}
