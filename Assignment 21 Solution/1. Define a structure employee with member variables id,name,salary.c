#include<stdio.h>
#include<string.h>

struct employee
{
	int id;
	char name[30];
	float salary;	
};

struct employee input()
{
	struct employee e;
	
	printf("\nEnter Your Id : ");
	scanf("%d",&e.id);
	fflush(stdin);
	printf("\nEnter Your Name : ");
	gets(e.name);
	printf("\nEnter Your Salary : ");
	scanf("%f",&e.salary);
	
	return(e);
}

void display(struct employee e)
{
	printf("\n%d %s %f",e.id,e.name,e.salary);
}

void highest_salary_employee(struct employee e[],int size)
{
	int i;
	struct employee max[size];
	
	
	
	for(i=0;i<size; i++)
	{
		if(e[i+1].salary > max[i].salary)
		{
			max[i].salary = e[i].salary;
		}
	}
	
}

void sort_employee_salary(struct employee e[],int size)
{
	int pass,i;
	struct employee temp;
	
	for(pass=0; pass<size-1; pass++)
	{
		for(i=0; i<size-1-pass; i++)
		{
			if(e[i].salary > e[i+1].salary)
			{
				temp = e[i];
				e[i] = e[i+1];
				e[i+1] = temp;
			}
		}
	}
}

void sort_employee_name(struct employee e[],int size)
{
	int pass,i,c;
	struct employee temp[30];
	
	for(pass=0; pass<size-1; pass++)
	{
		for(i=0; i<size-1-pass; i++)
		{
			c = strcmp(e[i].name,e[i+1].name);
			
			if(c>0)
			{
				strcpy(temp,e[i].name);
				strcpy(e[i].name,e[i+1].name);
				strcpy(e[i+1].name,temp);
			}
		}
	}
}

int main()
{
	struct employee e[4];
	int i;
	for(i=0; i<4; i++)
	{
		e[i] = input();
	}
	
	
	
	for(i=0; i<4; i++)
	{
		display(e[i]);
	}
	highest_salary_employee(e,4);

	
//	sort_employee_salary(e,4);
//	
//	for(i=0; i<4; i++)
//	{
//		display(e[i]);
//	}
//	
//	sort_employee_name(e,4);
//	
//	for(i=0; i<4; i++)
//	{
//		display(e[i]);
//	}
	
}
