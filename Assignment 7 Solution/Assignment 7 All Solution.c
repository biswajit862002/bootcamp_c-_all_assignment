						// Assignment 7 All Program


#include<stdio.h>
#include<stdlib.h>

void find_n_term_fibonacci()
{
	int n,a=0,b=1,c=0,i;
	printf("\nEnter The Number : ");
	scanf("%d",&n);
	printf("\nFibonacci Series of %d Term : ",n);
	for(i=1;i<=n;i++)
	{
		c = a+b;
		a = b;
		b = c;
		if(i==n)
		{
			printf("%d ",a);
		}
		
	}
}

void fibonacci()
{
	int n,a=0,b=1,c=0,i;
	printf("\nEnter Any Number : ");
	scanf("%d",&n);
	printf("\nFibonacci Series of %d : ",n);
	for(i=1;i<=n;i++)
	{
		c = a+b;
		a = b;
		b = c;
		printf("%d ",a);
	}
}

void check_fibonacci()
{
	int n,a=0,b=1,c=0;

	printf("\nEnter The Number : ");
	scanf("%d",&n);
	if(n==0 || n==1)
	{
		printf("%d Number is in The Fibonacci Series",n);
	}
	c = a+b;
	while(c<n)
	{
		a = b;
		b = c;
		c = a+b;
	}
	if(c==n)
	{
		printf("%d Number is in The Fibonacci Series",n);
	}	
	else
	{
		printf("%d Number is Not in The Fibonacci Series",n);
	}
}

void hcf()
{
	int a,b,i;
	printf("\nEnter First Number : ");
	scanf("%d",&a);
	printf("\nEnter Second Number : ");
	scanf("%d",&b);
	for(i=a<b?a:b;i>=1;i--)
	{
		if((a%i == 0) && (b%i == 0))
		{
			printf("\nHCF of %d and %d is : %d",a,b,i);
			break;
		}
	}
}

void all_prime_under100 ()
{
	int n,i;
	printf("\nAll Prime Numbers under 100 : ");
	for(n=1;n<100;n++)
	{
		for(i=2;i<n;i++)
		{
			if(n%i == 0)
			{
				break;
			}
		}
		if(i==n)
		{
			printf("%d ",n);
		}	
	}	
}

void is_prime_between_two()
{
	int n,i,a,b;
	printf("\nEnter Two Number : ");
	scanf("%d %d",&a,&b);
	
	printf("\nAll Prime Number Between %d and %d are : ",a,b);
	for(n=a;n<b;n++)
	{
		for(i=2;i<n;i++)
		{
			if(n%i == 0)
			{
				break;
			}
		}
		if(i==n)
		{
			printf("%d ",n);
		}	
	}	
}

void next_prime_()
{
	int n,i,a,count;
	printf("\nEnter a Number Less Than 1000 : ");
	scanf("%d",&a);
	
	printf("\nThe Closest Next Prime Number is : ");
	for(n=a+1;n<1000;n++)
	{
		count = 0;
		for(i=2;i<n;i++)
		{
			if(n%i == 0)
			{
				count++;
				break;
			}
		}
		if(count == 0)
		{
			printf("%d ",n);
			break;
		}	
	}	
}

void armstrong()
{
	int n,temp,r,q,sum=0;
	printf("\nEnter any Number : ");
	scanf("%d",&n);
	
	temp = n;
	
	while(n != 0)
	{
		r = n%10;
		q = r*r*r;
		sum = sum+q;
		n = n/10;
	}
	if(sum == temp)
	{
		printf("%d is an Armstrong Number",temp);
	}
	else
	{
		printf("%d is Not an Armstrong Number",temp);
	}
}

void armstrong_under1000()
{
	int i,temp,r,q,sum=0;
	printf("\nAll Armstrong Number Under 1000 : ");
	
	for(i=1;i<1000;i++)
	{
		temp = i;
		sum = 0;
		while(i != 0)
		{
			r = i%10;
			q = r*r*r;
			sum = sum+q;
			i = i/10;
		}
		if(sum == temp)
		{
			printf("%d ",sum);
		}
	}	
}

int menu()
{
	int ch;
	
	printf("\n1. w.a.p To Find The Nth Term Of The Fibonacci Series");
	printf("\n2. w.a.p To Print First Nth Term Of Fibonacci Series");
	printf("\n3. w.a.p To Check The Number is there in the Fibonacci Series or Not");
	printf("\n4. w.a.p To Calculate HCF Of Two Number");
	printf("\n5. w.a.p To Check Whether Two Given Number ae Co-Prime or Not");
	printf("\n6. w.a.p To Print All Prime NUmber Under 100");
	printf("\n7. w.a.p To Print All Prime Number Between Two Given Numbers");
	printf("\n8. w.a.p To Find Next Prim Number Of a Given Number");
	printf("\n9. w.a.p To Check Number is Armstrong Or Not");
	printf("\n10. w.a.p To Print All Armstrong Number Under 1000");
	printf("\n11. EXIT PROGRAM");
	
	printf("\n\nEnter Your Choice : ");
	scanf("%d",&ch);
	return(ch);
}

int main()
{
	while(1)
	{
		system("cls");
		switch(menu())
		{
			case 1 :	find_n_term_fibonacci();
						break;
						
			case 2 :	fibonacci();
						break;
						
			case 3 :	check_fibonacci();
						break;
						
			case 4 :	hcf();
						break;
						
			case 5 :	find_n_term_fibonacci();
						break;
						
			case 6 :	all_prime_under100 ();
						break;
						
			case 7 :	is_prime_between_two();
						break;
						
			case 8 :	next_prime_();
						break;
						
			case 9 :	armstrong();
						break;
						
			case 10 :	armstrong_under1000();
						break;
						
			case 11 :	exit(0);
			
			default :	printf("\nInvali Choice...\n");																															
		}
		getch();	
	}
	return(0);	
}

