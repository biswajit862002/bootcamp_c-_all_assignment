#include<stdio.h>

int main()
{
	char str[50];
	int len;
	printf("\nEnter any string with lowercase : ");
	gets(str);
	
	uppercase(str);
	
	return(0);
}

int uppercase(char str[])
{
	int i;
	for(i=0; str[i]; i++)
	{
		if(str[i] != ' ')
		{
			str[i] = str[i] - 32;
		}
	}
	printf("\nTransform String Into Uppercase : ");
	for(i=0; str[i]; i++)
	{
		printf("%c",str[i]);
	}
}
