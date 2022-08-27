#include<stdio.h>

void reverse_array(int *p,int size);
int main()
{
	int a[10],i;
	printf("\nEnter 10 values : ");
	for(i=0; i<10; i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nOriginal Array is :-\n\n");
	for(i=0; i<10; i++)
	{
		printf("%d ",a[i]);
	}
	
	reverse_array(a,10);
	
	return(0);
}

void reverse_array(int *p,int size)
{
	int i;
	printf("\n\nReverse Array is :-\n\n");
	for(i=size-1; i>=0; i--)
	{
		printf("%d ",*(p+i));
	}
}
