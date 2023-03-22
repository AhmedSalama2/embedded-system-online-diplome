/***
 ======================================================================================================================
 ** Created on     : 30 Jul 2022
 ** Author         : Ahmed Salama
 ** Project_Name   : Lab2_Minimum_Array
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/

#include <stdio.h>

int mininarray(const int *x, int k) {
    int i;
    int min = x[0];
    for (i = 1; i < k; ++i) {
        if (min > x[i]) {
            min = x[i];
        }
    }
    return min;
}

int main() {
    int x[5] = {1, -5, 3, 4, 5};
    printf("%d", mininarray(x, 5));
    return 0;
}
