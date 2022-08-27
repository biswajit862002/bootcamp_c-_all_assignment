#include<stdio.h>

void reverse(int a[],int n);
int main()
{
	int a[1000],i,n;
	
	printf("\nEnter How Many Number You Want To Stored An Array [1-1000]: ");
	scanf("%d",&n);
	printf("\nEnter %d Elements : ",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nArray Elements Are : ");
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	
	reverse(a,n);	
}

void reverse(int a[],int n)
{
	int i;
	printf("\nReverse Array Elements Are : ");
	for(i=n-1; i>=0; i--)
	{
		printf("%d ",a[i]);
	}
}
