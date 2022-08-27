#include<stdio.h>

int main()
{
	char str[50];
	int total;
	printf("\nEnter Any String : ");
	gets(str);
	
	total = count_words(str);
	printf("\nCount Words In a Given String are : %d",total);
	return(0);
}

int count_words(char str[])
{
	int i,count=1;
	for(i=0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ')
		{
			count++;
		}
	}
	return(count);
}
