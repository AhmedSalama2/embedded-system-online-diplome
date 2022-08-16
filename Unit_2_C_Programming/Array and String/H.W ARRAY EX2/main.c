/*
 * main.c
 *
 *  Created on: 5 Jul 2022
 *      Author: Ahmed Salama
 */
#include <stdio.h>
int main (){
	int   x;
	float y [100];
	double sum =0;
	printf ("please enter number of data :");
	fflush (stdin); fflush(stdout);
	scanf ("%d",&x);
	int i ;
	for (i =0;i<x&&i<100;++i){
		printf("please enter grade %d:",i+1);
		fflush(stdin);fflush(stdout);
		scanf ("%f",&y[i]);
		sum+=y[i];
	}
	 float z= sum/x;
	printf ("Average=%f ",z);
	return 0;
}

