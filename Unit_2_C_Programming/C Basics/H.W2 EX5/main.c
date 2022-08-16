/*
 * main.c
 *
 *  Created on: 2 Jul 2022
 *      Author: Ahmed Salama 
 */
#include <stdio.h>
int main (){
	char  x ;
	printf ("please enter character ");
	fflush(stdin);fflush(stdout);
	scanf ("%c",&x);
	if ( (x >='A' )&&x<='z'){
		printf ("%c is an alphabet",x);
	}
	else {
		printf ("%c is not an alphabet",x);
	}
	return 0;
}

