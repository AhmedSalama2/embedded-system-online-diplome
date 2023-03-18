/***
 ======================================================================================================================
 ** Created on     : 1 Jul 2022
 ** Author         : Ahmed Salama
 ** Project_Name   : Lab5_Calculate_the_Average_Students_Degrees.c
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int Degree, sum = 0, NUm_Student;
    char str[30];
    char *ptr;

    printf("please enter number of students \n ");
    fflush(stdin);
    fflush(stdout);
    scanf("%s", str);
    NUm_Student = strtol(str, &ptr, 10);

    int i;
    /*get degrees of Students */
    for (i = 0; i < NUm_Student; ++i) {
        printf("please enter grade of student %d\r\n", 1 + i);
        fflush(stdin);
        fflush(stdout);

        scanf("%s", str);
        Degree = strtol(str, &ptr, 10);
        /*sum all students`degrees*/


        sum += Degree;
    }
    /*Get Average*/
    printf("the average of grades =%d", sum / NUm_Student);
    return 0;
}
