/*
 * main.c
 *
 *  Created on: 31 Jul 2022
 *      Author: Ahmed Salama
 */
#include <stdio.h>
int  factorail(int x);
int main (){
	int x;
	printf ("please enter positive number ");
	fflush (stdin); fflush(stdout);
	scanf ("%d",&x);
	printf("%d",factorail(x));
	return 0;
}
int factorail(int x){
	if (x>1){
		return x*factorail(x-1);
	}
	else
		return 1;
}

