					// Assignment 11 All Program

#include<stdio.h>
#include<stdlib.h>

int LCM(int a,int b)
{
	int i;
	for(i=a<b?a:b; i<=a*b; i++)
	{
		if(i%a == 0 && i%b == 0)
		{
			return(i);
		}
	}
}

int HCF(int a,int b)
{
	int i;
	for(i=a<b?a:b; i>=1; i--)
	{
		if(a%i == 0 && b%i ==0)
		{
			return(i);
		}
	}
}

int is_prime(int n)
{
	int i;
	for(i=2; i<n; i++)
	{
		if(n%i == 0)
		{
			break;
		}
	}
	if(i==n)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

int next_prime(int n)
{
	int i,j,flag;
	for(i=n+1; 1; i++)
	{
		flag = 0;
		for(j=2; j<i; j++)
		{
			if(i%j == 0)
			{
				flag = 1;
				break;
			}
		}
		if(flag==0)
		{
			return(i);
		}
		
	}
}

void first_n_prime(int n)
{
	int i,j;
	for(i=1; i<=n; i++)
	{
		for(j=2; j<i; j++)
		{
			if(i%j == 0)
			{
				break;
			}
		}
		if(j==i)
		{
			printf("%d ",i);
		}
	}	
}

void all_prime(int a,int b)
{
	int i,j;
	for(i=a+1; i<b; i++)
	{
		for(j=2; j<i; j++)
		{
			if(i%j == 0)
			{
				break;
			}
		}
		if(j==i)
		{
			printf("%d ",i);
		}
	}
}

void n_terms_fibonacci(int n)
{
	int i,a=1,b=1,c;
	printf("\nFirst %d Fibonacci Series Is : ",n);
	for(i=1; i<=n; i++)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}
}

int square(int n)
{
	int sq;
	sq = n*n;
	return(sq);
}

int sum_of_the_series(int n)
{
	int i,j,fact,sum=0;
	
	for(i=1; i<=n; i++)
	{
		fact = 1;
		for(j=1; j<=i; j++)
		{
			fact = fact * j;
		}
		sum = sum + fact/i;
	}
	return(sum);
}

int menu()
{
	int ch;
	
	printf("\n1. Calculate LCM Of Two Numbers");
	printf("\n2. Calculate HCF Of Two Numbers");
	printf("\n3. Check The Number Is Prime Or Not");
	printf("\n4. Find The Next prime Numbers");
	printf("\n5. Print First N Prime Numbers");
	printf("\n6. Print All Prime Number Between Two Given numbers");
	printf("\n7. Print First N Terms Of Fibonacci Series");
	printf("\n8. Find The Squre Of Any Number");
	printf("\n9. Sum Of The Series 1!/1+2!/2+3!/3+4!/4+5!/5.....Like Wise");
	printf("\n10. Exit Program");
	
	printf("\n\nEnter Your Choice : ");
	scanf("%d",&ch);
	return(ch);
}

int main()
{
	int a,b,i,n;
	
	while(1)
	{
		system("cls");
		switch(menu())
		{
			case 1 :	printf("\nEnter First Number : ");
						scanf("%d",&a);
						printf("\nEnter Second Number : ");
						scanf("%d",&b);
						i = LCM(a,b);
						printf("\nLCM Of Two Numbers : %d",i);
						break;
						
			case 2 :	printf("\nEnter First Number : ");
						scanf("%d",&a);
						printf("\nEnter Second Number : ");
						scanf("%d",&b);
						i = HCF(a,b);
						printf("\nHCF Of Two Numbers : %d",i);
						break;			
						
			case 3 :	printf("\nEnter a Number : ");
						scanf("%d",&n);	
						i = is_prime(n);
						if(i==1)
						{
							printf("\n%d is A Prime Number",n);
						}
						else
						{
							printf("\n%d is Not A Prime Number",n);
						}
						break;
						
			case 4 :	printf("\nEnter a Number : ");
						scanf("%d",&n);	
						i = next_prime(n);
						printf("\nNext Prime Number is : %d",i);
						break;			
							
			case 5 :	printf("\nEnter a Number : ");
						scanf("%d",&n);	
						first_n_prime(n);
						break;
						
			case 6 :	printf("\nEnter First Number : ");
						scanf("%d",&a);
						printf("\nEnter Last Number : ");
						scanf("%d",&b);	
						all_prime(a,b);
						break;
						
			case 7 :	printf("\nEnter a Number : ");
						scanf("%d",&a);	
						n_terms_fibonacci(a);
						break;
						
			case 8 :	printf("\nEnter a Number : ");
						scanf("%d",&a);	
						i = square(a);
						printf("\nSquare Of %d is : %d",a,i);
						break;
						
			case 9 :	printf("\nEnter a Number : ");
						scanf("%d",&a);	
						i = sum_of_the_series(a);
						printf("\nSum Of The Series : %d",i);
						break;			
						
			case 10 : 	exit(0);
			
			default :	printf("\nInvalid Choice...\n");																			
		}
		getch();
	}
	return(0);
}

