					// Assignment 10 All Solution

#include<stdio.h>
#include<stdlib.h>

double circle_area(float r)
{
	double pi,area;
	pi = 3.14;
	
	area = pi*r*r;
	return(area);
}

double simple_interest(float p,float r,float t)
{
	double si;
	si = (p*r*t)/100;
	return(si);
}

int even_odd(int n)
{
	if(n%2==0)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

void natural_number(int n)
{
	int i;
	printf("\nFirst %d Natural Numbers are : ",n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",i);
	}
}

void odd_natural_number(int n)
{
	int i;
	printf("\nFirst %d Odd Natural Number are : ",n);
	for(i=1;i<=2*n;i+=2)
	{
		printf("%d ",i);
	}
}

int fact(int n)
{
	int i,fact;
	for(i=1,fact=1;i<=n;i++)
	{
		fact = fact * i;
	}
	return(fact);
}

int digit_or_not(char ch)
{
	if(ch>='0' && ch<='9')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

void prime_factors(int n)
{
	int i;
	printf("\nPrime Factors Are : ");
	for(i=2;n>1;i++)
	{
		while(n%i == 0)
		{
			printf("%d ",i);
			n = n/i;
		}
	}
}

int menu()
{
	int ch;
	
	printf("\n1. Calculate The Area Of Circle");
	printf("\n2. Calculate Simple Interest");
	printf("\n3. Check The Number Is Even Or Odd");
	printf("\n4. Print First N Natural Number");
	printf("\n5. Print First N Odd NaturAL Number");
	printf("\n6. Calculate the Factorial Of a Number");
	printf("\n7. Check The Number Is Digit Or Not");
	printf("\n8. Print All Prime Factors Of A Given Number");
	printf("\n9. Exit Program");
	
	printf("\n\nEnter Your Choice : ");
	scanf("%d",&ch);
	return(ch);
}

int main()
{
	int n,i;
	char ch;
	float r,p,t;
	double area,si;
	
	while(1)
	{
		system("cls");
		switch(menu())
		{
			case 1 :	printf("\nEnter The Radius Of Circle : ");
						scanf("%f",&r);
						area = circle_area(r);
						printf("\nArea Of Circle : %lf",area);
						break;
						
			case 2 :	printf("\nEnter The Principal Amount : ");
						scanf("%f",&p);
						printf("\nEnter The Rate Of Interest : ");
						scanf("%f",&r);
						printf("\nEnter The Time : ");
						scanf("%f",&t);	
						si = simple_interest(p,r,t);
						printf("\nSimple Interest : %lf",si);
						break;
						
			case 3 :	printf("\nEnter any Number : ");
						scanf("%d",&n);	
						i = even_odd(n);
						if(i == 1)
						{
							printf("\n%d Is A Even Number",n);
						}
						else
						{
							printf("\n%d Is A Odd Number",n);
						}
						break;
						
			case 4 :	printf("\nEnter a Number : ");
						scanf("%d",&n);	
						natural_number(n);
						break;
						
			case 5 :	printf("\nEnter a Number : ");
						scanf("%d",&n);							
						odd_natural_number(n);
						break;
						
			case 6 :	printf("\nEnter a Number : ");
						scanf("%d",&n);	
						i = fact(n);
						printf("\nFactorial Of %d Is : %d",n,i);
						break;
						
			case 7 :	//printf("\nEnter a Digit Or Symbol : ");
						//scanf("%c",&ch);	
						i = digit_or_not('9');
						if(i == 1)
						{
							printf("\nIt is a Digit");
						}
						else
						{
							printf("\nIt is Not a Digit");
						}
						break;	
						
			case 8 :	printf("\nEnter a Number : ");
						scanf("%d",&n);	
						prime_factors(n);
						break;
						
			case 9 :	exit(0);			
						
			default :	printf("\nInvalid Choice...\n");													
		}
		getch();
	}
	return(0);
}

