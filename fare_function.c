/*
NAME-KELLY KIUGI
REG NO-CT101/G/26503/25
COURSE-COMPUTER SCIENCE,group A
DISCRIPTION- function to calculate fare
*/
#include<stdio.h>
float calculateFare(float kilometers);
void main(){
	float kilometers,Totalfare;
	printf("enter kilometers traveled:");
	scanf("%f",&kilometers);
	Totalfare=calculateFare(kilometers);
	
	printf("your total fare is:%.2f",Totalfare);
	
	
}
float calculateFare(float kilometers){
	float fare;
	fare=kilometers*50;
	
	return fare;
}
