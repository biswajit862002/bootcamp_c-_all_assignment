#include<stdio.h>

void sort(int *ptr,int size);
int main()
{
	int a[10],i;
	printf("\nEnter 10 values : ");
	for(i=0; i<10; i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nBefore Sorted array :-\n\n");
	for(i=0; i<10; i++)
	{
		printf("%d ",a[i]);
	}
	
	sort(a,10);
	
	printf("\nAfter Sorted array :-\n\n");
	for(i=0; i<10; i++)
	{
		printf("%d ",a[i]);
	}
	
	return(0);
}

void sort(int *ptr,int size)
{
	int pass,i,temp;
	
	for(pass=0; pass<size-1; pass++)
	{
		for(i=0; i<size-1-pass; i++)
		{
			if(*(ptr+i) > *(ptr+i+1))
			{
				temp = ptr[i];
				ptr[i] = ptr[i+1];
				ptr[i+1] = temp;
			}
		}
	}
}
