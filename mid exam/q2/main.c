/*
 * main.c
 *
 *  Created on: 2 Aug 2022
 *      Author: ahmed
 */
#include <stdio.h>
#include <math.h>
double squareroot(double x){
	double high=x;
	double low =0;
	double temp;
	int i;
	for (i=0;i<100;++i){
		temp=(high+low)/2;
		if (temp*temp==x){
			return temp;
		}
		else if (temp*temp>x){
			high=temp;
		}
		else{
			low =temp;
		}
	}
	return temp;
}
int main (){
	double x;
	printf("please enter the number ");
	fflush(stdin);fflush(stdout);
	scanf("%lf",&x);
	printf ("square root of %lf=%lf",x,squareroot(x));
	return 0;
}

