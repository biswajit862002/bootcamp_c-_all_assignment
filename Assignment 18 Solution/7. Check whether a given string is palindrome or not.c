#include<stdio.h>
#include<string.h>

int is_palindrome(char str[]);

int main()
{
	char str[100];
	
	printf("\nEnter Any String : ");
	gets(str);
	
	if(is_palindrome(str))
	{
		printf("\nString Is a Palindrome");
	}
	else
	{
		printf("\nString Is Not a Palindrome");
	}
	return(0);
}

int is_palindrome(char str[])
{
	int l,i;
	l = strlen(str);
	for(i=0; i<l/2; i++)
	{
		if(str[i] != str[l-1-i])
		{
			return(0);
		}
	}
	return(1);
}
