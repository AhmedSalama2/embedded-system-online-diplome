/*
 * main.c
 *
 *  Created on: 2 Aug 2022
 *      Author: ahmed
 */
#include<stdio.h>
int main (){

	int x[10]={0,-10,2,6,9,6,1,0,-10,2};
	int i;
	int j;

	for ( i =0;i<10;++i){
		for ( j=0;j<10-i;++j){
			if (x[j]>x[j+1]){
				int swap ;
				swap=x[j];
				x[j]=x[j+1];
				x[j+1]=swap;
			}
		}
	}
	printf ("not repeated number:");
	for( i=0;i<10;++i){
		if (i>0){
			if (x[i]!=x[i-1]&&x[i]!=x[i+1]){
				printf ("%d ",x[i]);
			}
		}
		else{if (x[i]!=x[i+1]){
			printf ("%d ",x[i]);
		}
		}
	}
	return 0;
}

