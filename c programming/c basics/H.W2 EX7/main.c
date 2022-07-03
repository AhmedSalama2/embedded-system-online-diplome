/*
 * main.c
 *
 *  Created on: 2 Jul 2022
 *      Author: Ahmed Salama 
 */
#include <stdio.h>
int main (){
	int x ;
	long int sum =1;
	printf ("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf ("%d",&x);
	if (x>=0){
		int i;
		for (i=1;i<=x;++i){
			sum*=i;
		}
	}
	else if (x<0){
		printf("Error ! ! ! Factorial of negative number doesn ' t exist");
	}
	printf("Factorial =%ld",sum);
	return 0;
}




