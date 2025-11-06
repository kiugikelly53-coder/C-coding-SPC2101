/*
NAME:KELLY KIUGI
REG NO:CT101/G/26503/25
COURSE:COMPUTER SCIENCE GROUP A
DESCRPTION:storing ook titles in a file
*/
#include <stdio.h>
int main(){
     FILE *books;
     char title[100];
	books=fopen("C:\\Users\\HP\\Desktop\\c work\\borrowe_books.txt","a");
	printf("enter the title of the book:");
	scanf("%s",title);
	fprintf(books,"\n %s",title);
	
	
	fclose(books);
	
	return 0;
}
