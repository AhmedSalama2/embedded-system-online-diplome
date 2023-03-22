/***
 ======================================================================================================================
 ** Created on     : Wed Mar 22 2023
 ** Author         : Ahmed Salama
 ** Project_Name   : Least signification of the 4 bit
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/
#include <stdio.h>
#include <stdlib.h>
int forth_bit(int num);

int main() {
    printf("%d", forth_bit(23));
    return 0;
}

int forth_bit(int num) {
    return (((num >> 3) & 1) != 1 ? 0 : 1);
}
