/***
 ======================================================================================================================
 ** Created on     : Fri Mar 24 2023
 ** Author         : Ahmed Salama
 ** Project_Name   : EX3_Reverse_Sentence.c
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/

#include <stdio.h>
void Reverse_Sentence();

int main() {
    puts("Please Enter your Sentence:");
    Reverse_Sentence();
    return 0;
}

void Reverse_Sentence() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        Reverse_Sentence();
        printf("%c", c);
    }
}