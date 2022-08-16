/*
 * main.c
 *
 *  Created on: 1 July 2022
 *      Author: Ahmed Salama 
 */
#include <stdio.h>
int main (){
	int x ,y,z;
	printf ("please enter 2  numbers \n");
	fflush (stdin);fflush(stdout);
	scanf("%d %d",&x,&y);
	z=(x>=y)? y:x;
	printf("the minimum number =%d",z);
	return 0;
}

