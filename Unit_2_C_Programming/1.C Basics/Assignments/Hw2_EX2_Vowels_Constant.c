/***
 ======================================================================================================================
 ** Created on     : 2 Jul 2022
 ** Author         : Ahmed Salama
 ** Project_Name   : Hw2_EX2_Vowels_Constant.c
 ** C_Standard     : Ansi C _Std C89
 ** Course_Name    : Learn in Depth
 ** E_mail         : ahmedslamaaa934@gmail.com
 ======================================================================================================================
 ***/


#include <stdio.h>

int main() {
    char ch;
    printf("Enter an alphabet :");
    fflush(stdin);
    fflush(stdout);
    scanf("%c", &ch);
    switch (ch) {
    case 'A':
        printf("A is a vowel.");
        break;
    case 'a':
        printf("a is a vowel.");
        break;
    case 'i':
        printf("i is a vowel.");
        break;
    case 'I':
        printf("I is a vowel.");
        break;
    case 'U':
        printf("U is a vowel.");
        break;
    case 'u':
        printf("u is a vowel.");
        break;
    case 'e':
        printf("e is a vowel.");
        break;
    case 'E':
        printf("E is a vowel.");
        break;
    case 'o':
        printf("o is a vowel.");
        break;
    case 'O':
        printf("O is a vowel.");
        break;
    default:
        printf("%d is a consonant ", ch);
        break;
    }
    return 0;
}
