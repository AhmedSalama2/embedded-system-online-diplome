/*
 * main.c
 *
 *  Created on: 2 Aug 2022
 *      Author: ahmed
 */
#include <stdio.h>
#include<string.h>
int main (){
	char x[100];
	char temp [100];
	char temp1 [100];
	int i ;
	printf("please enter string");
	fflush(stdin); fflush(stdout);
	gets(x);

	int f;
	for (i=0;x[i]!='\0';++i){
		temp1[i]=x[i];
		if (x[i]==' '){
			for (++i,f=0;x[i]!='\0';++f,++i){
				temp[f]=x[i];
			}
			temp[f]=' ';
			temp[++f]='\0';
		break;
		}
	}
	strcat(temp,temp1);
	puts(temp);
	return 0;
}
