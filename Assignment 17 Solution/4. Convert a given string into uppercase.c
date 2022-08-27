#include<stdio.h>

int main()
{
	char str[50];
	int i;
	printf("\nEnter Any String with Lowercase : ");
	//scanf("%s",str);
	//fgets(str,50,stdin);
	gets(str);
	
	for(i=0; str[i] != '\0'; i++)
	{
		if(str[i] != ' ')
		{
			str[i] = str[i] - 32;
		}
	}
	printf("\nConvert a given string into Uppercase : %s",str); 
	return(0);
}
