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
			if(i==1 || i==j || j==2*n-i)
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
