#include<stdio.h>

int main()
{
	char str[50];
	int i,j;
	printf("\nEnter Any String : ");
	//scanf("%s",str);
	fgets(str,50,stdin);

	for(i=0; str[i] != '\0'; i++);
	
	printf("\nReverse String Is : ");
	for(j=i-1; j>=0; j--)
	{
		printf("%c",str[j]);
	}
	return(0);
}
