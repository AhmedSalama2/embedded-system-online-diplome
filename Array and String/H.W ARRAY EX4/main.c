/*
 * main.c
 *
 *  Created on: 8 Jul 2022
 *      Author: Ahmed Salama
 */
#include <stdio.h>
int main (){
	int   x,z,f;
	float y [100];
	printf ("Enter no of elements :");
	fflush (stdin); fflush(stdout);
	scanf ("%d",&x);
	int i ;
	for (i =0;i<x&&i<100;++i){
		printf("please enter elements %d:",i+1);
		fflush(stdin);fflush(stdout);
		scanf ("%f",&y[i]);
	}
	printf ("please enter number to inserted ");
	fflush(stdin);fflush(stdout);
	scanf ("%d",&z);
	printf ("Enter the location ");
	fflush(stdin);fflush(stdout);
	scanf ("%d",&f);
	int j;
	for(j=x;j>=f;--j){
		y[j]=y[j-1];
	}
	y[f-1]=z;
	for (i =0;i<x+1&&i<100;++i){
		printf(" element %d:%f\n",i+1,y[i]);
	}
	return 0;
}

