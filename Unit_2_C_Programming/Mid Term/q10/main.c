/*
 * main.c
 *
 *  Created on: 2 Aug 2022
 *      Author: ahmed
 */
#include <stdio.h>
int main (){
	int x;
	printf("please enter the number ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	int ones=0;
	int i;
	int high=0;
	for (i=0;i<32;++i){
		if ((1&x>>i)==1){
			ones++;
		}
		else {
			if(high<ones){
				high=ones;
			}
			ones=0;
		}
	}
	printf ("%d",high);
	return 0;
}

