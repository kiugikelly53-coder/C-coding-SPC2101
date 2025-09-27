/*
NAME-KELLY KIUGI
REG NO-CT101/G/26503/25
COURSE-COMPUTER SCIENCE,group A
DISCRIPTION-Exam eligibility
 
*/
#include<stdio.h>
int main(){
	float attendance_percentile,average_mark;
	printf("enter attendance percentile:");
	scanf("%f",& attendance_percentile );
	printf("enter average mark:");
	scanf("%f",& average_mark );
	
	if (attendance_percentile>=75 && average_mark>=40){
	printf("elgible for exams");}else{printf("not eligible for");}
	
	
	return 0;
	
	}
	
	
	



