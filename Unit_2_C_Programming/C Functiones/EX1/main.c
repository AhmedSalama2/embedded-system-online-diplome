/*
 * main.c
 *
 *  Created on: 30 Jul 2022
 *      Author: Ahmed Salama
 */
#include <stdio.h>
void primenum(int x);
int main (){
	int x ,y;
	printf ("please enter two numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&x,&y);
	if (x>y){
		for (;y<=x;++y){
		primenum(y);
		}
	}
	else if (y>x){
		for (;x<=y;++x){
		primenum(x);
		}

	}else {
		primenum(x);
	}
	return 0;
}
void primenum(int x){
	int i;
	int flag=0;
	for(i=2;i<=(x/2);++i){
		if ((x%i)==0){
			flag=1;
		}
	}
	if (flag==1){

	}
	else
		printf ("%d ",x);
}
