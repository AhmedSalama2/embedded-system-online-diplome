/*
 * main.c
 *
 *  Created on: 30 Jul 2022
 *      Author: Ahmed Salama
 */

#include <stdio.h>
int factorial(int x);

int main() {
    printf("%d", factorial(6));
    return 0;
}

int factorial(int x) {
    if (x > 1) {
        return x * factorial(x - 1);
    } else
        return 1;
}
