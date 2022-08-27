#include<stdio.h>

int main()
{
	char str1[50],str2[50];
	int i;
	printf("\nEnter Any String : ");
	//scanf("%s",str1);
	gets(str1);
	
	for(i=0; str1[i] != '\0'; i++)
	{
		str2[i] = str1[i];
	}
	printf("\nCopy One String To Another String : %s",str2);
	return(0);
}
