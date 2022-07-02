/*
 * main.c
 *
 *  Created on: 2 Jul 2022
 *      Author: Ahmed Salama 
 */
#include <stdio.h>
int main (){
	float x ,y, z;
	printf("please enter 3 numbers \n");
	fflush(stdin);  fflush(stdout);
	scanf ("%f", &x);
	scanf ("%f", &y);
	scanf ("%f", &z);
	if (x>=y &&x>=z){
		printf ("the largest number is %f",x);
	}
	else if (y>=x &&y>=z){
		printf ("the largest number is %f",y);

	}
	else{
		printf ("the largest number is %f",z);
	}
	return 0;
}

