/*
 * main.c
 *
 *  Created on: 2 Jul 2022
 *      Author: Ahmed Salama 
 */
#include<stdio.h>
int main (){
	int x;
	printf ("please enter the number ");
	fflush(stdin); fflush (stdout);
	scanf ("%d",&x);
	if ((x%2)==0){
		printf("%d is Even Number ",x);
	}
	else
		printf("%d is odd Number ",x);
	return 0;
}

