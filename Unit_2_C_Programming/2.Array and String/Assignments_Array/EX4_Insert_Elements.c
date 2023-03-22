/***
 ======================================================================================================================
 ** Created on     : 8 Jul 2022
 ** Author         : Ahmed Salama
 ** Project_Name   : EX4_Insert_Elements.c
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, z, f;
    float y[100];
    char buf[100];
    printf("Enter no of elements :");
    fflush(stdin);
    fflush(stdout);

    scanf("%s", buf);
    x = strtol(buf, NULL, 10);
    int i;
    for (i = 0; i < x && i < 100; ++i) {
        printf("please enter elements %d:", i + 1);
        fflush(stdin);
        fflush(stdout);
        scanf("%s", buf);
        y[i] = strtof(buf, NULL);
    }
    printf("please enter number to inserted ");
    fflush(stdin);
    fflush(stdout);
    scanf("%s", buf);
    z = strtol(buf, NULL, 10);
    printf("Enter the location ");
    fflush(stdin);
    fflush(stdout);
    scanf("%s", buf);
    f = strtol(buf, NULL, 10);
    int j;
    for (j = x; j >= f; --j) {
        y[j] = y[j - 1];
    }
    y[f - 1] = (float)z;
    for (i = 0; i < x + 1 && i < 100; ++i) {
        printf(" element %d:%f\n", i + 1, y[i]);
    }
    return 0;
}
