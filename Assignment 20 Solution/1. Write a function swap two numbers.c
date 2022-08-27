#include<stdio.h>

void swap(int *p,int *q);
int main()
{
	int a,b;
	printf("\nEnter two numbers : ");
	scanf("%d%d",&a,&b);
	
	printf("\nAfter Swaping the values :-\n");
	printf("a = %d & b = %d",a,b);
	
	swap(&a,&b);
	
	printf("\nBefore Swaping the values :-\n");
	printf("a = %d & b = %d",a,b);
	
	return(0);
}

void swap(int *p,int *q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}
