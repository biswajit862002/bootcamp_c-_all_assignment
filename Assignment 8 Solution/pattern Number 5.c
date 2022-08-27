#include<stdio.h>

int main()
{
	int i,j,n;
	printf("\nEnter Number Of Rows : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*n-1;j++)
		{
			if(( (n-i+1) <= j) && (j <= (n+i-1) ))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
