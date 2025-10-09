/*
NAME-KELLY KIUGI
REG NO-CT101/G/26503/25
COURSE-COMPUTER SCIENCE,group A
DISCRIPTION-withdrawing money
 
*/
#include <stdio.h>
int main(){
	int account_bal=1000;
	int withdrawal;
	printf("\n your balance is: %d",account_bal);
	while(account_bal>=0)
	{
		printf("\n enter withdrawal amount:");
		scanf("%d",&withdrawal);
		account_bal=account_bal-withdrawal;
		
		printf("\n your new balance is:%d",account_bal);
		
	
	
	
	}
	return 0;
		
	
}
