/*
NAME-KELLY KIUGI
REG NO-CT101/G/26503/25
COURSE-COMPUTER SCIENCE,group A
DISCRIPTION-condition for loans
 
*/
#include<stdio.h>
int main(){
	int age,anual_income;
	
	printf("enter age:");
	scanf("%d", & age);
	printf("enter anual_income:");
	scanf("%d",&anual_income);
	
	
	if(age>21 &anual_income>21000){printf(" eligle for loan");
	}else{printf("not eligle for loan");
	}
	
	return 0;
	
	
	
}

