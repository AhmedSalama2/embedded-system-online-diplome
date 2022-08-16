/*
 * main.c
 *
 *  Created on: 8 Jul 2022
 *      Author: Ahmed Salama
 */
#include <stdio.h>
int main()
{
	char c[100];
	int i;
	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(c);
	for(i=0; c[i]!='\0'; ++i);
	printf("Length of string: %d",i);
	return 0;
}

