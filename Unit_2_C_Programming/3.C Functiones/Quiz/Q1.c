/***
 ======================================================================================================================
 ** Created on     : Sun Mar 26 2023
 ** Author         : Ahmed Salama
 ** Project_Name   : USERNAME or not
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/
#include <stdio.h>

int String_Compare(const char *a, const char *b) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) {
            return 0;
        }
        i++;
    }
    if (a[i] != b[i]) {
        return 0;
    }
    return 1;
}

int main(void) {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    fgets(str1, 100, stdin);
    printf("Enter the second string: ");
    fgets(str2, 100, stdin);
    if (String_Compare(str1, str2) == 1) {
        printf("The strings are equal\n");
    } else {
        printf("The strings are not equal\n");
    }
    return 0;
}
