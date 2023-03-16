/*
 * main.c
 *
 *  Created on: 3 Jul 2022
 *      Author: Ahmed Salama 
 */
#include <stdio.h>
int main (){
	char  x ;
	printf ("Enter operator either + or - or * or divide : ");
	fflush(stdin);fflush(stdout);
	scanf ("%c",&x);
	int y,  z ;
	printf ("Enter two operands: ");
	fflush(stdin);fflush(stdout);
	scanf ("%d%d",&y,&z);
	switch(x){
	case '*':printf ("%d * %d =%d",y,z,y*z);break;
	case '/':printf ("%d / %d =%d",y,z,y/z);break;
	case '+':printf ("%d + %d =%d",y,z,y+z);break;
	case '-':printf ("%d - %d =%d",y,z,y-z);break;
	default:printf ("wrong operator !"); break;
	}
	return 0;
}

