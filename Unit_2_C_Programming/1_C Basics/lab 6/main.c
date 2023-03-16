/*
 * main.c
 *
 *  Created on: 1 Jul 2022
 *      Author: Ahmed Salama 
 */
#include <stdio.h>
int main (){
	int x , i ,j;
	printf ("please enter the number ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	for (i=0;i<=x;++i){
		for (j=i;j<=x;++j){
			printf("%d ",j);
		}
		printf("\n");
	}
	return  0;
}

