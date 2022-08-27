#include<stdio.h>

void reverse(char str[]);
int main()
{
	char str[50];
	printf("\nEnter any string : ");
	gets(str);
	
	reverse(str);
	
	return(0);
}

void reverse(char str[])
{
	int l,i;
	for(l=0; str[l]; l++);
	
	printf("\nReverse String is :-\n\n");
	for(i=l-1; i>=0; i--)
	{
		printf("%c",str[i]);
	}
}
