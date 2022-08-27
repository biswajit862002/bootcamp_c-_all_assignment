#include<stdio.h>
#define n 5
int main()
{
	char str[n][20];
	int i;	

	printf("\nEnter %d strings : ",n);
	for(i=0; i<n; i++)
	{
		gets(str[i]);
	}
	
	printf("\nDisplay %d Strings :-\n\n",n);
	for(i=0; i<n; i++)
	{
		puts(str[i]);
	}
	
	return(0);
}
