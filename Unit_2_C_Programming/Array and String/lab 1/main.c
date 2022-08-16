/*
 * main.c
 *
 *  Created on: 5 Jul 2022
 *      Author: Ahmed salama
 */
#include<stdio.h>
int main (){
	float x[10];
	int i ;
	for (i=0;i<10;++i){
		printf ("please enter grade of student %d : ",(i+1));
		fflush(stdin); fflush(stdout);
		scanf ("%f",&x[i]);
	}
	int j ;
	for (j=0;j<10;++j){
		printf (" grade of student number  %d :%f \n",(j+1),x[j]);}

	return 0;
}

