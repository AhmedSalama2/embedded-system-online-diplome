/*
 * main.c
 *
 *  Created on: 31 Jul 2022
 *      Author: Ahmed Salama
 */
#include <stdio.h>
int power(int x,int y);
int main()
{
	int base, exp;
	printf ( " Enter base number: ");
	fflush(stdin);fflush(stdout);
	scanf( "%d" ,&base);
	printf( " Enter power number(positive integer): ");
	fflush(stdin);fflush(stdout);
	scanf( "%d" ,&exp);
	printf( "%d^%d = %d ", base, exp, power(base, exp));
	return 0;
}

int power(int x,int y){
	if (y!=0)
		return (x*power(x,y-1));

	else
		return 1;
}



