/*
 * main.c
 *
 *  Created on: 2 Aug 2022
 *      Author: ahmed
 */
#include <stdio.h>
int main (){
	int x[10];
	int i ;
	for (i=0;i<10;++i){
		printf("please element the number %d:",1+i);
			fflush(stdin);fflush(stdout);
			scanf("%d",&x[i]);
	}
	int swap;
	for (i=0;i<(10/2);++i){
		swap=x[i];
		x[i]=x[9-i];
		x[9-i]=swap;
	}
	for (i=0;i<10;++i){
		printf("please element the number %d:%d\n ",1+i,x[i]);
	}
	return 0;
}

