/*
 * main.c
 *
 *  Created on: 2 Aug 2022
 *      Author: ahmed
 */
#include <stdio.h>
int main (){
	int i;
	for(i=0;i<2;++i){
		int x;
		printf("please enter the number ");
		fflush(stdin);fflush(stdout);
		scanf("%d",&x);
		int numadd=0;

		while (x!=0){
			numadd+=x%10;
			x/=10;
		}
		printf ("output %d= %d\n",i+1,numadd);
	}
	return 0;

}

