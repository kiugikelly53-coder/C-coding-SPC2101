/*
NAME:KELLY KIUGI
REG NO:CT101/G/26503/25
COURSE:COMPUTER SCIENCE GROUP A
DESCRPTION:2D array for display of hotrl occupancy
*/
#include <stdio.h>
int main(){
	int i,j;
	int occupancy[5][10];
	for(i=0;i<=4;i++){
		for(j=0;j<=9;j++){
		printf("enter 0 or 1 to represent occupied or vaccant respectively:");
		scanf("%d",&occupancy[i][j]);	
		}		
	}
	for(i=0;i<=4;i++){
		for(j=0;j<=9;j++){
			printf("\t %d",occupancy[i][j]);
			
		}
			printf("\n");
	}
		
	
}