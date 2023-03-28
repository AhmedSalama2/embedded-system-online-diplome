/***
 ======================================================================================================================
 ** Created on     : Thu Mar 23 2023
 ** Author         : Ahmed Salama
 ** Project_Name   : is_power_of_there
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/

#include <stdio.h>

int is_power_of_there(long long value);

int main() {
    printf("x=%d\n", is_power_of_there(2));
    return 0;
}

int is_power_of_there(long long value) {
    if (value < 3) {
        return 1;
    }
    while (value != 0) {
        if (value % 3 == 0) {
            value /= 3;
            if (value == 1) {
                return 0;
            }
        } else {
            return 1;
        }
    }
    return 0;
}