#include<stdio.h>

int maximum(int *p,int *q);
int main()
{
	int a,b,max;
	printf("\nEnter two numbers : ");
	scanf("%d%d",&a,&b);
	
	max = maximum(&a,&b);
	
	printf("\nMaximum number between two numbers is : %d",max);
	
	return(0);
}

int maximum(int *p,int *q)
{
	int c;
	c = (*p > *q) ? *p : *q;
	return(c);
}
