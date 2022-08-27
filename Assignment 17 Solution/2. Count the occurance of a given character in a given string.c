#include<stdio.h>

int main()
{
	char str[50];
	int i,ch,count=0;
	printf("\nEnter Any String : ");
	gets(str);
	printf("\nEnter A Character  : ");
	scanf("%c",&ch);
	
	for(i=0; str[i] != '\0'; i++)
	{
		if(ch == str[i])
		{
			count++;
		}
	}	
	if(count != 0)
	{
		printf("\nOccurrence of %c = %d Times",ch,count);
	}
	else
	{
		printf("\nCharacter Not Found");
	}
	return(0);
}
