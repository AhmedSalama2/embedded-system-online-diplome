/***
 ======================================================================================================================
 ** Created on     : 30 Jul 2022
 ** Author         : Ahmed Salama
 ** Project_Name   : EX1_Prime_Number
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/

#include <stdio.h>
#include <stdlib.h>
void prime_num(int x);

int main() {
    char buf[30];
    int x, y;
    printf("please enter two numbers:");
    fflush(stdin);
    fflush(stdout);
    scanf("%s", buf);
    x = strtol(buf, NULL, 10);
    scanf("%s", buf);
    y = strtol(buf, NULL, 10);

    if (x > y) {
        for (; y <= x; ++y) {
            prime_num(y);
        }
    } else if (y > x) {
        for (; x <= y; ++x) {
            prime_num(x);
        }

    } else {
        prime_num(x);
    }
    return 0;
}

void prime_num(int x) {
    int i;
    int flag = 0;
    for (i = 2; i <= (x / 2); ++i) {
        if ((x % i) == 0) {
            flag = 1;
        }
    }
    if (flag == 1) {

    } else
        printf("%d ", x);
}
