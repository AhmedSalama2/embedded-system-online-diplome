/*
 * main.c
 *
 *  Created on: 5 Jul 2022
 *      Author: Ahmed Salama
 */
#include <stdio.h>
int main (){
	float x [3][3];
	float t [3][3];
	int i , j;
	for (i=0;i<3;++i){
		for (j=0;j<3;++j){
			printf("PLEASE ENTER NUMBER (%d)(%d):",i+1,j+1);
			fflush (stdin); fflush(stdout);
			scanf("%f",&x[i][j]);
		}
	}
	printf ("the matrix is :\n");
	for (i=0;i<3;++i){
		for (j=0;j<3;++j){
			printf ("%f",x[i][j]);
		}
		printf ("\n");
	}
	for (i=0;i<3;++i){
		for (j=0;j<3;++j){
			t[j][i]=x[i][j];
		}
	}
	printf ("the transpose matrix :\n");
	for (i=0;i<3;++i){
		for (j=0;j<3;++j){
			printf ("%f",t[i][j]);
		}
		printf("\n");
	}
	return 0;
}
