/*
 * main.c
 *
 *  Created on: 30 Jul 2022
 *      Author: Ahmed Salama
 */
#include <stdio.h>
void shape(int x){
	int i ,j;
	for (i=0;i<=x;++i){
		for (j=0;i+j<=x;++j){
			printf ("%d ",j+i);
		}
		printf ("\n");
	}
}
int  main (){
	shape(10);
	return 0;

}

