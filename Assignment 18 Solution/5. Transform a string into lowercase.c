#include<stdio.h>

int main()
{
	char str[50];
	int len;
	printf("\nEnter any string with uppercase : ");
	gets(str);
	
	lowercase(str);
	
	return(0);
}

int lowercase(char str[])
{
	int i;
	for(i=0; str[i]; i++)
	{
		if(str[i] != ' ')
		{
			str[i] = str[i] + 32;
		}
	}
	printf("\nTransform String Into Lowercase : ");
	for(i=0; str[i]; i++)
	{
		printf("%c",str[i]);
	}
}
