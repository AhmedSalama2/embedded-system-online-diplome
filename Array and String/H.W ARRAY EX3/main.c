/*
 * main.c
 *
 *  Created on: 7 Jul 2022
 *      Author: Ahmed Salama
 */
/*
 * main.c
 *
 *  Created on: 5 Jul 2022
 *      Author: Ahmed Salama
 */
#include <stdio.h>
int main (){
	float x [100][100];
	float t [100][100];
	int n ;
	printf("PLEASE ENTER SIZE OF MATRIX ");
	fflush (stdin); fflush(stdout);
	scanf("%d",&n);
	int i , j;
	for (i=0;i<n;++i){
		for (j=0;j<n;++j){
			printf("PLEASE ENTER NUMBER (%d)(%d):",i+1,j+1);
			fflush (stdin); fflush(stdout);
			scanf("%f",&x[i][j]);
		}
	}
	printf ("the matrix is :\n");
	for (i=0;i<n;++i){
		for (j=0;j<n;++j){
			printf ("%f ",x[i][j]);
		}
		printf ("\n");
	}
	for (i=0;i<n;++i){
		for (j=0;j<n;++j){
			t[j][i]=x[i][j];
		}
	}
	printf ("the transpose matrix :\n");
	for (i=0;i<n;++i){
		for (j=0;j<n;++j){
			printf ("%f ",t[i][j]);
		}
		printf("\n");
	}
	return 0;
}


