/*
 * main.c
 *
 *  Created on: 30 Jul 2022
 *      Author: Ahmed Salama
 */
#include <stdio.h>
int  factorail(int x);
int main (){
	printf("%d",factorail(6));
	return 0;
}
int factorail(int x){
	if (x>1){
		return x*factorail(x-1);
	}
	else
		return 1;
}
