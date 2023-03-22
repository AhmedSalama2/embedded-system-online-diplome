/***
 ======================================================================================================================
 ** Created on     : 5 Jul 2022
 ** Author         : Ahmed Salama
 ** Project_Name   : Lab1_Store_and_Print_10_Students_Degrees.c
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float student_grades[10];
    int num_student;
    char str[30];
    char *ptr;
    for (num_student = 0; num_student < 10; ++num_student) {
        printf("Please Enter Grade of Student %d : ", (num_student + 1));
        fflush(stdin);
        fflush(stdout);
        scanf("%s", str);
        student_grades[num_student] = strtof(str, &ptr);
    }
    for (num_student = 0; num_student < 10; ++num_student) {
        printf(" Grade of Student Number  %d :%f \n", (num_student + 1), student_grades[num_student]);
    }

    return 0;
}
