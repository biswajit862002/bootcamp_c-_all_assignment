#include<stdio.h>

int main()
{
	char str[50];
	int i,alpha=0,digit=0,special=0;
	printf("\nEnter Any String : ");
	//scanf("%s",str);
	//fgets(str,50,stdin);
	gets(str);
	
	for(i=0; str[i] != '\0'; i++)
	{
		if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
		{
			alpha++;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			digit++;
		}
		else
		{
			special++;
		}
	}
	printf("\nTotal Number Of Alphabets are : %d",alpha);
	printf("\nTotal Number Of Digit are : %d",digit);
	printf("\nTotal Number Of Special are : %d",special);
	return(0);
}










