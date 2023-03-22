/*
 * main.c
 *
 *  Created on: 5 Jul 2022
 *      Author: Ahmed Salama
 */
#include <stdio.h>

int main() {
    float x[] = {5, 3, 10, 60, 4};
    int i;
    float y;
    for (i = 0; i < 5; ++i) {
        y = x[i] * 5 + x[i] * x[i] - x[i] / 2;
        printf(" value of y (%d):%f\n", i + 1, y);
    }
    return 0;
}
