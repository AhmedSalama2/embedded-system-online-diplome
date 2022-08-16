/*;==========================================
; Title:  Student struct
; Author: Ahmed Salama Abdallah 
; Date:   13 August 2022
;==========================================*/
#include<stdio.h>
struct sstudent{
	char name[100];
	int roll ;
	double marks;
};
struct sstudent readdata(void){
	struct sstudent x1;
	printf("please enter name: ");
	scanf ("%s",x1.name);
	printf("please enter roll: ");
	scanf ("%d",&x1.roll);
	printf("please enter marks: ");
	scanf ("%lf",&x1.marks);
	return x1;
}
void printsrudent (struct sstudent x1){
	printf("name:%s\n",x1.name);
	printf("Roll=%d\n",x1.roll);
	printf ("marks=%lf\n",x1.marks);
}
void main (void){
	struct sstudent x;
	x=readdata();
	printsrudent(x);
}