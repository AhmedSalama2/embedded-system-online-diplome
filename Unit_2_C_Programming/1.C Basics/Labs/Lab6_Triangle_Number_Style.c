/*
 * main.c
 *
 *  Created on: 1 Jul 2022
 *      Author: Ahmed Salama
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int Num_Lines, i, j;
    char str[30];
    char *ptr;
    printf("Please Enter the Number ");
    fflush(stdin);
    fflush(stdout);
    scanf("%s", str);
    Num_Lines = strtol(str, &ptr, 10);


    for (i = 0; i <= Num_Lines; ++i) {
        for (j = i; j <= Num_Lines; ++j) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
