#include<stdio.h>

int main()
{
	char str[50];
	int i;
	printf("\nEnter Any String : ");
	//fgets(str,50,stdin);
	gets(str);	
	for(i=0; str[i] != '\0'; i++);
	{
		printf("\nCalculate The Langth Of String Is : %d",i);
	}
	return(0);
}
