/*
 * main.c
 *
 *  Created on: 2 Aug 2022
 *      Author: ahmed
 */
#include<stdio.h>
int main(){
	int x;
	printf("please enter the number ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	int numadd=0;

	while (x!=0){
		numadd=numadd*10+(x%10);
		x/=10;
	}
	printf ("output= %d\n",numadd);
	return 0;
}
