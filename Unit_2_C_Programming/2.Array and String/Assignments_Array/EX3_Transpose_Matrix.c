/***
 ======================================================================================================================
 ** Created on     : 5 Jul 2022
 ** Author         : Ahmed Salama
 ** Project_Name   : EX3_Transpose_Matrix
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float x[100][100];
    float t[100][100];
    int n;
    char buf[100];

    printf("PLEASE ENTER SIZE OF MATRIX ");
    fflush(stdin);
    fflush(stdout);
    scanf("%s", buf);
    n = strtol(buf, NULL, 10);
    int i, j;
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            printf("PLEASE ENTER NUMBER (%d)(%d):", i + 1, j + 1);
            fflush(stdin);
            fflush(stdout);
            scanf("%s", buf);
            x[i][j] = strtof(buf, NULL);
        }
    }
    printf("the matrix is :\n");
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            printf("%f ", x[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            t[j][i] = x[i][j];
        }
    }
    printf("the transpose matrix :\n");
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            printf("%f ", t[i][j]);
        }
        printf("\n");
    }
    return 0;
}
