/*
 * main.c
 *
 *  Created on: 2 Aug 2022
 *      Author: ahmed
 */
#include <stdio.h>
int main (){
	int x;
	printf ("please enter number ");
	fflush(stdin); fflush (stdout);
	scanf ("%d",&x);
	int i;
	int numones=0;
	for (i=0;i<32;++i){
		if ((1&x>>i)==1){
			numones++;
		}
	}
	printf ("number of ones on %d=%d",x,numones);
	return 0;
}

