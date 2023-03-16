/*
 * main.c
 *
 *  Created on: 2 Jul 2022
 *      Author: Ahmed Salama 
 */
#include <stdio.h>
int main (){
	int x ;
	long int sum =0;
	printf ("please enter the number ");
	fflush(stdin);fflush(stdout);
	scanf ("%d",&x);
	int i;
	for (i=1;i<=x;++i){
		sum+=i;
	}
	printf ("the summation :%Ld",sum);
	return 0;
}

