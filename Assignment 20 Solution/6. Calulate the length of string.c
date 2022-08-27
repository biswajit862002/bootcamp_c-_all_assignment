#include<stdio.h>

int length(char *ptr);
int main()
{
	char str[30];
	int l;
	printf("\nEnter a string : ");
	gets(str);
	
	l = length(str);
	
	printf("\nTotal Length of String is : %d",l);
	
	return(0);
}

int length(char *ptr)
{
	int i;
	for(i=0; *(ptr+i); i++);
	return(i);
}
