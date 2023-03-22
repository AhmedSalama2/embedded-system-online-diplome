/***
 ======================================================================================================================
 ** Created on     : Wed Mar 22 2023
 ** Author         : Ahmed Salama
 ** Project_Name   : Lab3_Find_Name.c
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/
#include <stdio.h>
#include <string.h>

int findName(char names[][14], size_t n, char name[]);

int main() {
    char name[14];
    char names[5][14] = {"AlAA", "Osama", "Mamdouh",
                         "Samy", "Hossain"};
    puts("Enter your first name:");
    fgets(name, sizeof(name), stdin);
    if (findName(names, 5, name) == 1) {
        puts("Welcome");
    } else {
        puts("Goodby");
    }
    return 0;
}

int findName(char names[][14], size_t n, char name[]) {
    size_t i;
    for (i = 0; i < n; i++) {
        if ((strcasecmp(names[i], name) == 0) == 0) {
            return 1;
        }
    }
    return 0;
}