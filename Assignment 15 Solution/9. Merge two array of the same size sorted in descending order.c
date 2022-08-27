#include<stdio.h>

void merge(int a[],int b[],int c[],int n);
void sort(int c[],int n);
int main()
{
	int a[1000],b[1000],c[2000],n,i;
	
	printf("\nEnter size of Two array [1-1000] : ");
	scanf("%d",&n);
	
	printf("\nEnter %d elements of first array : ",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter %d elements of second array : ",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&b[i]);
	}
	
	merge(a,b,c,n);
	sort(c,2*n);
	return(0);
}

void merge(int a[],int b[],int c[],int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		c[i] = a[i];
	}
	for(i=0; i<n; i++)
	{
		c[n+i] = b[i];
	}
	
	printf("\nMarge of two array : ");
	for(i=0; i<n+n; i++)
	{
		printf("%d ",c[i]);
	}
}

void sort(int c[],int n)
{
	int pass,i,temp;
	for(pass=0; pass<n-1; pass++)
	{
		for(i=0; i<n-1-pass; i++)
		{
			if(c[i] < c[i+1])
			{
				temp = c[i];
				c[i] = c[i+1];
				c[i+1] = temp;
			}
		}
	}
	
	printf("\nSorte Array : ");
	for(i=0; i<n; i++)
	{
		printf("%d ",c[i]);
	}	
}
