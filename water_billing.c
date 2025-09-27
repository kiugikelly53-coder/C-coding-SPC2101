/*
NAME-KELLY KIUGI
REG NO-CT101/G/26503/25
COURSE-COMPUTER SCIENCE,group A
DISCRIPTION-Water charges
 
*/
#include<stdio.h>
int main(){
	float units,total_bill;
	printf("enter units used:");
	scanf("%f",& units);
	
	if(units<=30){
		total_bill=units *20;
	}
	else if(units<=60){
		total_bill= units *25;
	}
	else {
		total_bill= units *30;
	}
	printf("Your total bill is %.2f", total_bill);
	return 0;
}
