/*
NAME-KELLY KIUGI
REG NO-CT101/G/26503/25
COURSE-COMPUTER SCIENCE,group A
DISCRIPTION-Data bundle purchase
 
*/
#include<stdio.h>
int main(){
	printf("\n1 . 100mb @ 50 KES");
	printf("\n2. 500mb @ 200 KES");
	printf("\n3. 1GB   @ 350 KES");
	printf("\n4. 2GB   @ 600 KES");
	
	int choice;
	printf("\nenter your choice (1-4)");
	scanf("%d",&choice);
	
	switch (choice){
		case 1:
			printf(" you selected 100mb, cost= 50KES");
		break;
		case 2:
			printf(" you selected 500mb, cost= 200KES");
		break;
		case 3:
			printf(" you selected 1GB, cost= 350KES");
		break;
		case 4:
			printf("you selected 2GB, cost= 600KES");
		break;
		default:
			printf("invalid choice");
			
			
	}
	return 0;
			
}


