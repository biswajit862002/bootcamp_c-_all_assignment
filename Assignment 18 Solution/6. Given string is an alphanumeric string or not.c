#include<stdio.h>

int alphanumeric(char str[]);

int main()
{
	char str[50];
	int ch;
	printf("\nEnter Any String : ");
	//scanf("%s",str);
	fgets(str,50,stdin);
	
	ch = alphanumeric(str);
	if(ch)
	{
		printf("\nString Is a Alphanumeric");
	}
	else
	{
		printf("\nString Is Not a Alphanumeric");	
	}

	return(0);
}

int alphanumeric(char str[])
{
	int i,alpha=0,digit=0;
	for(i=0; str[i] != '\0'; i++)
	{
		if((str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'))
		{
			alpha = 1;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			digit = 1;
		}
	}
	if(alpha == 1 && digit == 1)
	{
		return(1);
	}
}

