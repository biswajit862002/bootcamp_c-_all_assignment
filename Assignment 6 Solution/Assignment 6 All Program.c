				// Assignment 6 All Program

#include<stdio.h>
#include<stdlib.h>

void sum_natural()
{
	int n,i,sum;
	printf("\nEnter a Natural Number : ");
	scanf("%d",&n);
	for(i=1,sum=0;i<=n;i++)
	{
		sum = sum+i;
	}
	printf("\nSum of First %d Natural Numbers is : %d",n,sum);
}

void sum_even_natural()
{
	int n,i,sum;
	printf("\nEnter a Natural Number : ");
	scanf("%d",&n);
	for(i=1,sum=0;i<=n;i++)
	{
		sum = sum+(2*i);
	}
	printf("\nSum of First %d Even Natural Numbers is : %d",n,sum);
}

void sum_odd_natural()
{
	int n,i,sum;
	printf("\nEnter a Natural Number : ");
	scanf("%d",&n);
	for(i=1,sum=0;i<=n;i++)
	{
		sum = sum+(2*i-1);
	}
	printf("\nSum of First %d Odd Natural Numbers is : %d",n,sum);
}

void sum_squares_natural()
{
	int n,i,sum;
	printf("\nEnter a Natural Number : ");
	scanf("%d",&n);
	for(i=1,sum=0;i<=n;i++)
	{
		sum = sum+(i*i);
	}
	printf("\nSum of Squares First %d Natural Numbers is : %d",n,sum);
}

void sum_cubes()
{
	int n,i,sum;
	printf("\nEnter a Natural Number : ");
	scanf("%d",&n);
	for(i=1,sum=0;i<=n;i++)
	{
		sum = sum+(i*i*i);
	}
	printf("\nSum of Cubes First %d Natural Numbers is : %d",n,sum);
}

void sum_factorial()
{
	int n,i,fact;
	printf("\nEnter a Natural Number : ");
	scanf("%d",&n);
	for(i=n,fact=1;i>=1;i--)
	{
		fact = fact*i;
	}
	printf("\nFactorial Of a Number %d = %d",n,fact);
}

void count_digit()
{
	int n,i,count=0,r=0,temp=0;
	printf("\nEnter any Number : ");
	scanf("%d",&n);
	temp=n;
	while(n != 0)
	{
		r = n%10;
		count++;
		n = n/10;	
	}
	printf("\nCount Digit Of a %d are : %d",temp,count);
}

void is_prime()
{
	int n,i;
	printf("\nEnter any Number : ");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i == 0)
		{
			break;
		}
	}
	if(i == n)
	{
		printf("\n%d is a Prime Number",n);
	}
	else
	{
		printf("\n%d is Not a Prime Number",n);
	}
}

void lcm()
{
	int a,b,i;
	printf("\nEnter First Number : ");
	scanf("%d",&a);
	printf("\nEnter Second Number : ");
	scanf("%d",&b);
	
	for(i=a<b?a:b;i<=a*b;i++)
	{
		if((i%a == 0) && (i%b == 0))
		{
			printf("\nLCM of %d and %d is : %d",a,b,i);
		}
	}
}

void reverse_number()
{
	int n,r=0,sum=0,temp=0;
	printf("\nEnter any Number : ");
	scanf("%d",&n);
	temp=n;
	while(n != 0)
	{
		r = n%10;
		sum = sum*10+r;
		n = n/10;
	}
	printf("\nreverse Number of %d is : %d",temp,sum);
}

int menu()
{
	int ch;
	
	printf("\n1. Calculate Sum Of First N Natural Numbers");
	printf("\n2. Calculate Sum Of First N Even Natural Numbers");
	printf("\n3. Calculate Sum Of First N Odd Natural Numbers");
	printf("\n4. Calculate Sum Of Squares Of First N Natural Numbers");
	printf("\n5. Calculate Sum Of cubes Of First N Natural Numbers");
	printf("\n6. Calculate Factorial Of a Number");
	printf("\n7. Count Digits in a Given Number");
	printf("\n8. Check The Number is Prime Or Not");
	printf("\n9. Calculate LCM Of Two Numbers");
	printf("\n10. Reverse a Given Number");
	printf("\n11. Exit Program");
	
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
			case 1 :	sum_natural();
						break;
						
			case 2 :	sum_even_natural();
						break;
						
			case 3 :	sum_odd_natural();
						break;
						
			case 4 :	sum_squares_natural();
						break;
						
			case 5 :	sum_cubes();
						break;
						
			case 6 :	sum_factorial();
						break;
						
			case 7 :	count_digit();
						break;
						
			case 8 :	is_prime();
						break;
						
			case 9 :	lcm();
						break;
						
			case 10 :	reverse_number();
						break;																								
						
			case 11 :	exit(0);
			
			default : printf("\nInvalid Choice...\n");						
		}
		getch();
	}
	return(0);
}

