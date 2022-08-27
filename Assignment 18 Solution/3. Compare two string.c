#include<stdio.h>

int main()
{
	char str[50],str2[50];
	int t;
	printf("\nEnter First string : ");
	gets(str);
	printf("\nEnter Second string : ");
	gets(str2);
	
	t = compare_string(str,str2);
	
	if(t)
	{
		printf("\nBoth String Are Equal");
	}
	else
	{
		printf("\nBoth String Are Not Equal");
	}
	
	return(0);
}

int compare_string(char str[],char str2[])
{
	int l,l1,i;
	for(l=0; str[l]; l++);
	for(l1=0; str2[l1]; l1++);
	
	if(l != l1)
	{
		return(0);
	}
	else
	{
		for(i=0; i<l; i++)
		{
			if(str[i] != str2[i])
			{
				return(0);
			}	
		}
		return(1);
	}	
}









