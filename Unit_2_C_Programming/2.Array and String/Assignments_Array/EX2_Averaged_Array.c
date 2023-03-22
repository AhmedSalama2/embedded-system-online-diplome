/***
 ======================================================================================================================
 ** Created on     : 5 Jul 2022
 ** Author         : Ahmed Salama
 ** Project_Name   : EX2_Averaged_Array
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    float y[100];
    double sum = 0;
    char buf[100];
    printf("Enter the number of data :");
    fflush(stdin);
    fflush(stdout);
    scanf("%s", buf);
    x = strtol(buf, NULL, 10);
    int i;
    for (i = 0; i < x && i < 100; ++i) {
        printf("please enter grade %d:", i + 1);
        fflush(stdin);
        fflush(stdout);
        scanf("%s", buf);
        y[i] = strtof(buf, NULL);
        sum += y[i];
    }
    float z = (float)sum / (float)x;
    printf("Average=%f : ", z);

    return 0;
}
