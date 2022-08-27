						//Assignment 16 All Program

#include<stdio.h>
#include<stdlib.h>

void sum_of_two_matrix()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	
	printf("\nEnter Elements Of a First Matrix in 3x3 :- \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Element in Pocket [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nEnter Elements Of a Second Matrix in 3x3 :- \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Element in Pocket [%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\nSum Of Two Matrix is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}


void product_of_two_matrix()
{
	int a[3][3],b[3][3],c[3][3],i,j,k,sum;
	
	printf("\nEnter Elements Of a First Matrix in 3x3 :- \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Element in Pocket [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nEnter Elements Of a Second Matrix in 3x3 :- \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Element in Pocket [%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum = 0;
			for(k=0;k<3;k++)
			{
				sum = sum + a[i][k] * b[k][j];
			}
			c[i][j] = sum;
		}
	}
	
	printf("\nProduct Of Two Matrix is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}


void transposed_matrix()
{
	int a[3][3],i,j;
	
	printf("\nEnter Elements Of a Matrix in 3x3 :- \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Element in Pocket [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nMatrix Is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);		
		}
		printf("\n");
	}
	
	printf("\nTransposed matrix Is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[j][i]);		
		}
		printf("\n");
	}
}


void sum_of_right_diagonal_matrix()
{
	int a[3][3],i,j,sum=0;
	
	printf("\nEnter Elements Of a Matrix in 3x3 :- \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Element in Pocket [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nMatrix Is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);		
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i == j)
			{
				sum = sum + a[i][j];	
			}	
		}
	}
	
	printf("\nSum Of Right Diagonals Matrix Is : %d",sum);
	
}


void sum_of_left_diagonal_matrix()
{
	int a[3][3],i,j,sum=0;
	
	printf("\nEnter Elements Of a Matrix in 3x3 :- \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Element in Pocket [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nMatrix Is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);		
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i + j == 2)
			{
				sum = sum + a[i][j];	
			}	
		}
	}
	
	printf("\nSum Of Left Diagonals Matrix Is : %d",sum);
}

void sum_of_rows_columns()
{
	int a[3][3],i,j,sum=0,sum1=0;
	
	printf("\nEnter Elements Of a Matrix in 3x3 :- \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Element in Pocket [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nMatrix Is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);		
		}
		printf("\n");
	}
	
	printf("\nBelow The Sum Of Each Row... \n");
	for(i=0;i<3;i++)
	{
		sum = 0;
		for(j=0;j<3;j++)
		{
			sum = sum + a[i][j];	
		}
		printf("\nSum Of %d row is : %d",i+1,sum);
	}
	
	printf("\n\nBelow The Sum Of Each Column... \n");
	for(j=0;j<3;j++)
	{
		sum1 = 0;
		for(i=0;i<3;i++)
		{
			sum1 = sum1 + a[i][j];	
		}
		printf("\nSum Of %d Column is : %d",j+1,sum1);
	}
}


void lower_triangular_martrix()
{
	int a[3][3],i,j;
	
	printf("\nEnter Elements Of a Matrix in 3x3 :- \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Element in Pocket [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nMatrix Is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);		
		}
		printf("\n");
	}
	

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i < j)
			{
				a[i][j] = 0;	
			}	
		}
	}
	
	printf("\nDisplay Lower Triangular Matrix Is :-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}


void upper_triangular_martrix()
{
	int a[3][3],i,j;
	
	printf("\nEnter Elements Of a Matrix in 3x3 :- \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Element in Pocket [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nMatrix Is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);		
		}
		printf("\n");
	}
	

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i > j)
			{
				a[i][j] = 0;	
			}	
		}
	}
	
	printf("\nDisplay Upper Triangular Matrix Is :-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}


void sparse_matrix()
{
	int a[3][3],i,j,count=0;
	
	printf("\nEnter Elements Of a Matrix in 3x3 :- \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Element in Pocket [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nMatrix Is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);		
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j] == 0)
			{
				count++;		
			}		
		}
	}
	if(count > 9/2)
	{
		printf("\nThis Matrix Is a Sparse Matrix...");
	}
	else
	{
		printf("\nThis Matrix Is Not a Sparse Matrix...");
	}
}


void maximum_number_of_1s()
{
	int a[3][3],i,j,count=0,max=0,index;
	
	printf("\nEnter Elements Of a Matrix in 3x3 :- \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Element in Pocket [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nMatrix Is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);		
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
		count = 0;
		for(j=0;j<3;j++)
		{
			if(a[i][j] == 1)
			{
				count = count + a[i][j];
			}
			if(count > max)
			{
				max = count;
				index = i;		
			}		
		}
	}
	printf("\nMaximum Number Of 1s is %d Row = %d Times",index+1,max);	
}


int menu()
{
	int ch;
	
	printf("\n1. w.a.p To Calculate The Sum Of Two Matrix");
	printf("\n2. w.a.p To Calculate The Product Of teo Matrix");
	printf("\n3. w.a.p in C To Find The Transpose of a Given Matrix");
	printf("\n4. w.a.p in C To Find The Sum Of Right Diagonals Of a Matrix");
	printf("\n5. w.a.p in C To Find The Sum Of Left Diagonals Of a Matrix");
	printf("\n6. w.a.p in C To Find Sum Of Rows And Columns Of a Matrix");
	printf("\n7. w.a.p in C To Print Or Display The Lower Traingular Of a Given Matrix");
	printf("\n8. w.a.p in C To Print Or Display The Upper Traingular Of a Given Matrix");
	printf("\n9. w.a.p in C To Accept a Matrix and Determine Whether It Is a Sparse Matrix");
	printf("\n10. w.a.p in C To Find The Row With maximum Number Of 1s");
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
			case 1 :	sum_of_two_matrix();
						break;
						
			case 2 :	product_of_two_matrix();
						break;
						
			case 3 :	transposed_matrix();
						break;
						
			case 4 :	sum_of_right_diagonal_matrix();
						break;
						
			case 5 :	sum_of_left_diagonal_matrix();
						break;
						
			case 6 :	sum_of_rows_columns();
						break;
						
			case 7 :	lower_triangular_martrix();
						break;
						
			case 8 :	upper_triangular_martrix();
						break;
						
			case 9 :	sparse_matrix();
						break;
						
			case 10 :	maximum_number_of_1s();
						break;
						
			case 11 :	exit(0);
			
			default :	printf("\nInvali Choice...\n");																															
		}
		getch();	
	}
	return(0);	
}

