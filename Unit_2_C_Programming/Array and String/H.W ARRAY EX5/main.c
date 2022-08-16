/*
 * main.c
 *
 *  Created on: 8 Jul 2022
 *      Author: Ahmed Salama
 */
#include <stdio.h>
int main (){
	int x ,z;
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
	printf ("Enter the elements to be searched ");
	fflush(stdin);fflush(stdout);
	scanf ("%d",&z);
	for (i =0;i<x&&i<100;++i){
		if (z==y[i]){
			break;
		}
	}
	if (i==x||i==100){
		printf ("not exist");
	}
	else {
		printf ("Number found at the location=%d",i+1);
	}
	return 0;
}

