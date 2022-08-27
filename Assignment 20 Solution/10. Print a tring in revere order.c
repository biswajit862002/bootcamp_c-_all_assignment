#include<stdio.h>

void reverse_string(char *p);
int main()
{
	char str[100];
	printf("\nEnter a string : ");
	gets(str);
	
	printf("\nOriginal String is :-\n\n");
	printf("%s",str);
	
	reverse_string(str);
	
	return(0);
}

void reverse_string(char *p)
{
	int i,l;
	
	for(l=0; *(p+l); l++);
	
	printf("\n\nReverse String is :-\n\n");
	for(i=l-1; i>=0; i--)
	{
		printf("%c",*(p+i));
	}
}
