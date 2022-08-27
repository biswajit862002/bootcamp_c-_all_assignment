#include<stdio.h>
#include<string.h>

void swap_string(char *str,char *str2);
int main()
{
	char str[20];
	char str2[20];
	
	printf("\nEnter two strings : ");
	gets(str);
	gets(str2);
	
	printf("\nAfter Swaping the string :-\n\n");
	printf("%s %s",str,str2);
	
	swap_string(str,str2);
	
	printf("\nBefore Swaping the string :-\n");
	printf("%s %s",str,str2);
	
	return(0);
}

void swap_string(char *ptr,char *ptr2)
{
	char s[20];
	strcpy(s,ptr);
	strcpy(ptr,ptr2);
	strcpy(ptr2,s);
}
