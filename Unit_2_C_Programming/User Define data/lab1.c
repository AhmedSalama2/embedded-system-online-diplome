/*;==========================================
; Title:  add complex 
; Author: Ahmed Salama Abdallah 
; Date:   13 August 2022
;==========================================*/
#include<stdio.h>
struct scomplexnum
{
	double M_r;
	double M_i;
};
struct scomplexnum readval(void){
	struct scomplexnum c;
	printf("Please Enter Real Value: ");
	scanf("%lf",&c.M_r);
	printf("Please Enter imaginary Value: ");
	scanf("%lf",&c.M_i);
	return c;
}
struct scomplexnum addcom(struct scomplexnum A,struct scomplexnum B){
	struct scomplexnum c;
	c.M_r=A.M_r+B.M_r;
	c.M_i=A.M_r+A.M_i;
	return c;
}
int main (void){
	struct scomplexnum a,b,c;
	a=readval();
	b=readval();
	c=addcom(a,b);
	printf(" add value =%lf+%lfi",c.M_r,c.M_i);
	return 0;

}