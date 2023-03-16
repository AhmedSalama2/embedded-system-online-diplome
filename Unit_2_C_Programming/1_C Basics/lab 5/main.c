/*
 * main.c
 *
 *  Created on: 1 Jul 2022
 *      Author: Ahmed Salama 
 */
#include <stdio.h>
int main (){
	int x, sum=0, y;
	printf ("please enter number of students \n ");
	fflush (stdin);fflush(stdout);
	scanf("%d",&x);
	int i ;
	for (i=0;i<x;++i){
		printf ("please enter grade of student %d\r\n",1+i);
		fflush (stdin);fflush(stdout);
		scanf ("%d",&y);
		sum+=y;
	}
	printf ("the average of grades =%d",sum/x);
	return 0;

}

