/*
NAME-KELLY KIUGI
REG NO-CT101/G/26503/25
COURSE-COMPUTER SCIENCE,group A
DISCRIPTION-function to calcuate total electric bill
*/
#include<stdio.h>

float calculateElectricBill(float units);
void main(){
	float units,Totalbill;
	printf("\n enter the number of units used:");
	scanf("%f",& units);
	Totalbill=calculateElectricBill(units);
	printf("your total bill is:%.2f",Totalbill);
}
float calculateElectricBill(float units){
	float bill;
	if(units<=100){
		bill=units*10;
	}
	else if(units<=200){
		bill=(100*10)+15*(units-100);
	}
	else{
	    bill=(100*10)+(100*15)+20*(units-200);
	}
	
	return bill;
}
