/*
 * main.c
 *
 *  Created on: 8 Jul 2022
 *      Author: Ahmed Salama
 */
#include <stdio.h>
#include <string.h>

int main() {
    int f = 0;
    char x[200], y;
    printf("Enter a string:");
    fflush(stdin);
    fflush(stdout);
    fgets(x, sizeof(x), stdin);
    printf("Enter a character to find frequency:");
    fflush(stdin);
    fflush(stdout);
    scanf("%c", &y);
    int i;
    for (i = 0; x[i] != '\0'; ++i) {
        if (y == x[i]) {
            ++f;
        }
    }
    printf("Frequency of %c =%d", y, f);
    return 0;
}
