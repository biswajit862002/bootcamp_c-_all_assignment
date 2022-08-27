#include<stdio.h>

int main()
{
	char str[50];
	int len;
	printf("\nEnter any string : ");
	gets(str);
	
	len = calculate_length(str);
	
	printf("\nCalculate Length Of String Is : %d",len);
	
	return(0);
}

int calculate_length(char str[])
{
	int i;
	for(i=0; str[i]; i++);
	return(i);
}
