/*
 * main.c
 *
 *  Created on: 24 Jun 2022
 *      Author: Ahmed salama
 */
#include <stdio.h>
#define pi 3.14
int main (void){
	char choice ;
	float  raduis;
	double result  ;
	printf("please enter radius of circle \n");
	fflush(stdin); fflush(stdout);
	scanf ("%f",&raduis );
	printf (" please enter if area enter a and if circumference of circle  enter c ");
	fflush(stdin); fflush(stdout);
	scanf ("%c",&choice );
	if (choice =='a'){
		result = raduis * raduis *pi;
		printf("the area  of  circle =%lF",result);
	}
	else if (choice=='c'){
		result =2*raduis *pi;
		printf("the circumference  of  circle =%lF",result);
	}
	else
		printf("error");



	return 0;
}

