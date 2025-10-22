/*
NAME-KELLY KIUGI
REG NO-CT101/G/26503/25
COURSE-COMPUTER SCIENCE,group A
DISCRIPTION- converting fahrenheit to celcius
*/
#include<stdio.h>
float convertToCelcius(float Fahrenheit);

void main(){
	float Fahrenheit,conversion;
	printf("enter fahrenheit to be converted:");
	scanf("%f",&Fahrenheit);
	conversion=convertToCelcius(Fahrenheit);
	
	printf("the tempreture in celcius is: %.2f",conversion);
	
	
	
}
float convertToCelcius(float Fahrenheit){
	float celcius;
	celcius=(Fahrenheit-32)*5/9;
	
	
	return celcius;
	
}
