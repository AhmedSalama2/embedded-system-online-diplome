/*;==========================================
; Title:  struct Array 
; Author: Ahmed Salama Abdallah 
; Date:   13 August 2022
;==========================================*/
#include<stdio.h>
struct sstudent{
	char name[100];
	double marks;
};
struct sstudent readdata(void){
	struct sstudent x1;
	printf("please enter name: ");
	scanf ("%s",x1.name);
	printf("please enter marks: ");
	scanf ("%lf",&x1.marks);
	return x1;
}
void printsrudent (struct sstudent x1){
	printf("name:%s\n",x1.name);
	printf ("marks=%lf\n",x1.marks);
}
int main(){
	struct sstudent x[5];
	int i;
	for (i=0;i<10;++i){
		x[i]=readdata();
	}
	for (i=0;i<10;++i){
		printf("information roll number %d\n",i+1);
		printsrudent(x[i]);
	}
}