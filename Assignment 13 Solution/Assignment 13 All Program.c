					// Assignment 13 All Program 

#include<stdio.h>
#include<stdlib.h>

int sum_first_n_number(int n)
{
	int sum=0;
	if(n==1)
	{
		return(1);
	}
	else
	{
		sum = n+sum_first_n_number(n-1);
		return(sum);
	}
}

int sum_odd_natural_number(int n)
{
	int sum;
	if(n==1)
	{
		return(1);
	}
	else
	{
		sum = 2*n-1 + sum_odd_natural_number(n-1);
		return(sum);
	}
}

int sum_even_natural_number(int n)
{
	int sum;
	if(n==1)
	{
		return(2);
	}
	else
	{
		sum = 2*n + sum_even_natural_number(n-1);
		return(sum);
	}
}

int sum_square_first_n(int n)
{
	int sum;
	if(n==1)
	{
		return(1);
	}
	else
	{
		sum = n*n + sum_square_first_n(n-1);
		return(sum);
	}
}

int sum_of_digit(int n)
{
	int sum=0;
	if(n==0)
	{
		return(0);
	}
	else
	{
		sum = n%10 + sum_of_digit(n/10);
		return(sum);
	}
}

int fact(int n)
{
	int factorial;
	if(n==1)
	{
		return(1);
	}
	else
	{
		factorial = n * fact(n-1);
		return(factorial);
	}
}

int HCF(int a,int b)
{
	if(a==b)
	{
		return(a);
	}
	else if(a%b == 0)
	{
		return(b);
	}
	else if(b%a == 0)
	{
		return(a);	
	}
	else if(a>b)
	{
		HCF(a%b,b);
	}
	else
	{
		HCF(a,b%a);
	}
}

int fib(int n)
{
	int f;
	if(n==0 || n==1)
	{
		return(n);
	}
	else
	{
		return(fib(n-1) + fib(n-2));
	}
}

int count_digit(int n)
{
	int count,i=1;
	if(n==0)
	{
		return(0);
	}
	else
	{
		count = i + count_digit(n/10);
		return(count);
	}
}

int power(int a,int b)
{
	int pow;
	if(b==0)
	{
		return(1);
	}
	else
	{
		pow = a * power(a,b-1);
		return(pow);
	}
}


int menu()
{
	int ch;
	
	printf("\n1. Recursive Function to Calculate Sum Of First N natural Numbers");
	printf("\n2. Recursive Function to Calculate Sum Of First N Odd natural Numbers");
	printf("\n3. Recursive Function to Calculate Sum Of First N Even natural Numbers");
	printf("\n4. Recursive Function to Calculate Sum Of Squares Of First N natural Numbers");
	printf("\n5. Recursive Function to Calculate Sum Of Digits Of a Given Number");
	printf("\n6. Recursive Function to Calculate Factorial Of a Given Number");
	printf("\n7. Recursive Function to Calculate HCF Of a Two Numbers");
	printf("\n8. Recursive Function to Print First N Terms Of Fibonacci Series");
	printf("\n9. Count The Digits Of a Given Number Using Recursion");
	printf("\n10. Calculate The Power Of Any Number Using Recursion");
	printf("\n11. Exit Program");
	
	printf("\n\nEnter Your Choice : ");
	scanf("%d",&ch);
	return(ch);
}

int main()
{
	int a,b,i;
	
	while(1)
	{
		system("cls");
		switch(menu())
		{
			case 1 :	printf("\nEnter a Number : ");
						scanf("%d",&a);
						printf("\nSum Of First %d natural Numbers are : %d",a,sum_first_n_number(a));
						break;
						
			case 2 :	printf("\nEnter a Number : ");
						scanf("%d",&a);
						printf("\nSum Of First %d Odd natural Numbers are : %d",a,sum_odd_natural_number(a));
						break;		
						
			case 3 :	printf("\nEnter a Number : ");
						scanf("%d",&a);
						printf("\nSum Of First %d Even natural Numbers are : %d",a,sum_even_natural_number(a));
						break;
						
						
			case 4 :	printf("\nEnter a Number : ");
						scanf("%d",&a);
						printf("\nSum Of Squares Of First %d Natural Numbers are : %d",a,sum_square_first_n(a));
						break;			
							
			case 5 :	printf("\nEnter a Number : ");
						scanf("%d",&a);
						printf("\nSum Of Digit : %d",sum_of_digit(a));
						break;
						
			case 6 :	printf("\nEnter a Number : ");
						scanf("%d",&a);
						printf("\nFactorial Of %d = %d",a,fact(a));				
						break;
						
			case 7 :	printf("\nEnter Two Numbers : ");
						scanf("%d %d",&a,&b);	
						printf("\nHCF Of %d & %d = %d",a,b,HCF(a,b));		
						break;
						
			case 8 :	printf("\nEnter How Many Terms Of Fibonacci Seris You Want To see : ");
						scanf("%d",&a);	
						for(i=1; i<=a; i++)
						{
							printf("%d ",fib(i));
						}	
						break;
						
			case 9 :	printf("\nEnter a Number : ");
						scanf("%d",&a);	
						printf("\nCount Of Digits of a Givn Number = %d",count_digit(a));
						break;
						
			case 10 :	printf("\nEnter a Base Value : ");
						scanf("%d",&a);
						printf("\nEnter a Power Value : ");
						scanf("%d",&b);	
						printf("\nPower Of %d = %d",a,power(a,b));
						break;						
						
			case 11 : 	exit(0);
			
			default :	printf("\nInvalid Choice...\n");																			
		}
		getch();
	}
	return(0);
}

