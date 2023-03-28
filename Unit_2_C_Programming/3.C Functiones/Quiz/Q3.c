/***
 ======================================================================================================================
 ** Created on     : Fri Mar 24 2023
 ** Author         : Ahmed Salama
 ** Project_Name   : Reverse_Array
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/
#include <stdio.h>

void display_array(int *arr, int len) {
    int i;
    for (i = 0; i < len; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverse_array(int *arr, int len) {
    int temp[len];
    int i;
    for (i = 0; i < len; ++i) {
        temp[i] = arr[i];
    }
    for (i = len - 1; i >= 0; --i, ++arr) {
        *arr = temp[i];
    }
}

int main() {
    int x[] = {1, 2, 3, 4, 5, 6, 7};
    display_array(x, sizeof(x) / sizeof(int));
    reverse_array(x, sizeof(x) / sizeof(int));
    display_array(x, sizeof(x) / sizeof(int));
    return 0;
}
