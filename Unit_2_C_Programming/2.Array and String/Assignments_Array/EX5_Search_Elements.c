/*
 * main.c
 *
 *  Created on: 8 Jul 2022
 *      Author: Ahmed Salama
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, z;
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
    printf("Enter the elements to be searched ");
    fflush(stdin);
    fflush(stdout);
    scanf("%s", buf);
    z = strtol(buf, NULL, 10);
    for (i = 0; i < x && i < 100; ++i) {
        if (z == (int)y[i]) {
            break;
        }
    }
    if (i == x || i == 100) {
        printf("not exist");
    } else {
        printf("Number found at the location=%d", i + 1);
    }
    return 0;
}
