/*
NAME-KELLY KIUGI
REG NO-CT101/G/26503/25
COURSE-COMPUTER SCIENCE,group A
DISCRIPTION-Compound intrest
 
*/
#include<stdio.h>
#include<math.h>
int main(){
	float principal,rate,time,compound_intrest;

	
	
	printf("\n enter principal:");
	scanf("%f",&principal);
	printf("\n enter rate:");
	scanf("%f",&rate);
	printf("\n enter time:");
	scanf("%f",&time);
	
	  compound_intrest = principal* pow((1+rate /100),time);
	
	printf("\n compound_intrest ksh.%.2f ",compound_intrest);
	
	return 0;
	
	
	
	
	
	
	
}
