/*
 * main.c
 *
 *  Created on: 30 Jun 2022
 *      Author: Ahmed Salama
 */
#include <stdio.h>
int main (){
	int x ,y, z;
	printf("please enter 3 numbers \n");
	fflush(stdin);  fflush(stdout);
	scanf ("%d", &x);
	scanf ("%d", &y);
	scanf ("%d", &z);
	if (x>=y &&x>=z){
		printf ("the largest number is %d",x);
	}
	else if (y>=x &&y>=z){
		printf ("the largest number is %d",y);

	}
	else{
		printf ("the largest number is %d",z);
	}
	return 0;
}


