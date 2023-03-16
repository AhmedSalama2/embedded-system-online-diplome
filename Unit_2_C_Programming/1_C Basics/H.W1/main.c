/*
 * main.c
 *
 *  Created on: 2 Jul 2022
 *      Author: Ahmed Salama 
 */
#include <stdio.h>
int main (){
	/*ex1*/
	/*printf ("c programming");*/
	/*ex2*/
	/*int x;
	printf ("please enter integer number \n");
	fflush (stdin); fflush(stdout);
	scanf("%d", &x);
	printf ("the entered number %d",x);*/
	/*ex3*/
	/*int x,y;
	printf ("please enter two numbers \n");
	fflush (stdin); fflush(stdout);
	scanf("%d %d", &x,&y);
	printf("sum:%d",x+y);*/
	/*ex4*/
	/*float x,y;
	printf ("please enter two numbers \n");
	fflush (stdin); fflush(stdout);
	scanf("%f %f", &x,&y);
	printf("product:%f",x*y)0;*/
	/*ex5*/
	/*char x;
	printf ("please enter character \n");
	fflush (stdin); fflush(stdout);
	scanf("%c", &x);
    printf ("ASCII code for character:%d ",x);*/
	/*ex6*/
	/*int x , y ,temp ;
	printf ("please enter A number\n");
	fflush (stdin); fflush(stdout);
	scanf("%d", &x);
	printf ("please enter B number \n");
	fflush (stdin); fflush(stdout);
	scanf("%d", &y);
	temp = x;
	x=y;
	y=temp;
	printf (" A number:%d \n",x);
	printf (" B number:%d \n",y);*/
	/*ex7*/
	int x , y ;
	printf ("please enter A number\n");
	fflush (stdin); fflush(stdout);
	scanf("%d", &x);
	printf ("please enter B number \n");
	fflush (stdin); fflush(stdout);
	scanf("%d", &y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf (" A number:%d \n",x);
	printf (" B number:%d \n",y);

	return 0 ;
}

