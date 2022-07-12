/*
 * main.c
 *
 *  Created on: 10 Jul 2022
 *      Author: Ahmed Salama
 */
#include <stdio.h>
#include <string.h>
int main (){
	char ch [300];
	printf (" please enter string ");
	fflush (stdin);fflush (stdout);
	gets(ch);
	int i;
	for (i =(strlen(ch)-1); i>=0;--i){
		printf ("%c",ch[i]);
	}
	return 0;
}

