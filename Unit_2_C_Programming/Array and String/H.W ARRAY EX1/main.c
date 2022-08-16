/*
 * main.c
 *
 *  Created on: 5 Jul 2022
 *      Author: ahmed
 */
#include <stdio.h>
int main (){
	float x[2][2];
	float y[2][2];
	int i,j;
	for (i=0;i<2;++i){
		for (j=0;j<2;++j){
			printf("PLEASE ENTER NUMBER for first matrix(%d)(%d):",i+1,j+1);
			fflush (stdin); fflush(stdout);
			scanf("%f",&x[i][j]);
		}
	}
	for (i=0;i<2;++i){
		for (j=0;j<2;++j){
			printf("PLEASE ENTER NUMBER for second matrix(%d)(%d):",i+1,j+1);
			fflush (stdin); fflush(stdout);
			scanf("%f",&y[i][j]);
		}
	}
	printf ("sum of two matrices :\n");
	for (i=0;i<2;++i){
		for (j=0;j<2;++j){
			printf("%f  ",(x[i][j]+y[i][j]));
		}
		printf ("\n");
	}
	return 0 ;
}

