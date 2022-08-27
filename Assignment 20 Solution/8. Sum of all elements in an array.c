#include<stdio.h>

int sum_array(int *p,int size);
int main()
{
	int a[10],i,sum=0;
	printf("\nEnter 10 values : ");
	for(i=0; i<10; i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nArray is :-\n\n");
	for(i=0; i<10; i++)
	{
		printf("%d ",a[i]);
	}
	
	sum = sum_array(a,10);
	
	printf("\n\nSum of array Element : %d",sum);
	
	return(0);
}

int sum_array(int *p,int size)
{
	int i,sum=0;
	for(i=0; i<size; i++)
	{
		sum = sum + p[i];	//sum = sum + *(p+i);
	}
	return(sum);
}
