/*;==========================================
; Title:  ADD DISTANCE
; Author: Ahmed Salama Abdallah 
; Date:   13 August 2022
;==========================================*/
#include<stdio.h>
struct sdistance {
	double m_feet;
	double m_inch;
}; 
struct sdistance adddistance(struct sdistance x,struct sdistance y){
	struct sdistance c;
	c.m_feet=x.m_feet+y.m_feet;
	c.m_inch=x.m_inch+y.m_inch;
	int f =c.m_inch/12;
	if (c.m_inch>=12){
		c.m_feet+=f;
		c.m_inch-=(12*f);
	}
	return c;
}
struct sdistance read_distance(void){
	struct sdistance c;
	printf("please Enter feet distance : ");
	scanf ("%lf",&c.m_feet);
	printf("please Enter inch distance : ");
	scanf ("%lf",&c.m_inch);
	return c;
}
void printsdistance (struct sdistance x1){
	printf("the sum of distance :\n");
	printf("feet =%lf             ,inch=%lf\n",x1.m_feet,x1.m_inch);
}
void main (void){
	struct sdistance x,y,c;
	x=read_distance();
	y=read_distance();
	c=adddistance(x,y);
	printsdistance(c);
}