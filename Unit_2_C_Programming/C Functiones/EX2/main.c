/*
 * main.c
 *
 *  Created on: 31 Jul 2022
 *      Author: Ahmed Salama
 */
#include <stdio.h>
#include <stdlib.h>

int factorial(int x);

int main() {
    int x;
    char buf[30];
    printf("please enter positive number ");
    fflush(stdin);
    fflush(stdout);
    scanf("%s", buf);
    x = strtol(buf, NULL, 10);
    printf("%d", factorial(x));
    return 0;
}

int factorial(int x) {
    if (x > 1) {
        return x * factorial(x - 1);
    } else {
        return 1;
    }
}
