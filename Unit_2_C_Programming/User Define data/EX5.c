/*;==========================================
; Title:  using macros 
; Author: Ahmed Salama Abdallah 
; Date:   13 August 2022
;==========================================*/
#include <stdio.h>
#define  pi   3.14
#define area(r) pi*r*2
int main(int argc, char **argv){
	printf("area of circle =%lf\n",area(10) );
	return 0;
}