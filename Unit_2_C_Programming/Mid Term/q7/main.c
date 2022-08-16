/*
 * main.c
 *
 *  Created on: 2 Aug 2022
 *      Author: ahmed
 */
#include <stdio.h>
long  sumfunc(int x){
	if (x>0){
		return x+sumfunc(x-1);
	}
	else
		return 0;
}
int main (){
	int x;
	x=sumfunc(100);
	printf ("%d",x);
	return 0;
}


