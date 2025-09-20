/*
NAME-KELLY KIUGI
REG NO-CT101/G/26503/25
COURSE-COMPUTER SCIENCE,group A
DISCRIPTION-Surface area and Volume of a cylinder
 
*/
#include<stdio.h>
#include<math.h>
int main(){
	float radius,pi,height,volume,surface_area;
	pi=3.14;
	printf("enter radius:");
	scanf("%f",&radius);
	printf("enter height:");
	scanf("%f",& height);
	
	volume = pi*height*pow(radius,2);
	
	surface_area = 2*pi*pow(radius,2)+2*pi*radius*height;
	
	printf("the volume is %.2f",volume);
	printf("\n the surface area is %.2f",surface_area);
	
	return 0;
	
	
}
