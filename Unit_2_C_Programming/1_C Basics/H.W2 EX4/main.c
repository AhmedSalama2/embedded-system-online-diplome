/*
 * main.c
 *
 *  Created on: 2 Jul 2022
 *      Author: Ahmed Salama 
 */
#include <stdio.h>
int main (){
	float  x ;
	printf ("please enter the number ");
	fflush(stdin);fflush(stdout);
	scanf ("%f",&x);
	if (x>0){
		printf("%f is positive",x);
	}
	else if (x<0){
		printf("%f is negative",x);
	}
	else {
		printf("%f is equal zero",x);
	}
}

