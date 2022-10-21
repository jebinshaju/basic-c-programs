#include<stdio.h>
void sum()
{
	int A[10][10],B[10][10],C[10][10],m1,n1,m2,n2,i,j,k,opt,sum;
	printf("Enter the number of rows and columns of matrix-A: ");
	scanf("%d%d",&m1,&n1);
	printf("Enter the matrix-A:");
	
	for(i=0;i<m1;i++)
		for(j=0;j<n1;j++)
			scanf("%d",&A[i][j]);
			
	printf("Enter the number of rows and columns of matrix-B: ");
	scanf("%d%d",&m2,&n2);
	printf("Enter the matrix-B:");
	
	for(i=0;i<m2;i++)
		for(j=0;j<n2;j++)
			scanf("%d",&B[i][j]);
			if(m1!=m2 || n1!=n2)
			{
				printf("Size of two matrix shouldbe same for addition\n");
			}
			else
			{
			
			for(i=0;i<m1;i++)
				for(j=0;j<n1;j++)
					C[i][j]=A[i][j]+B[i][j];
			printf("\n MATRIX SUM\n");
			for(i=0;i<m1;i++)
			{
				for(j=0;j<n1;j++)
				{
					printf("%d\t",C[i][j]);
				}
				printf("\n");
			}
		}
				
}

void trans()
{
					int A[10][10],B[10][10],C[10][10],m1,n1,m2,n2,i,j,k,opt,sum;
	printf("Enter the number of rows and columns of matrix-A: ");
	scanf("%d%d",&m1,&n1);
	printf("Enter the matrix-A:");
	
	for(i=0;i<m1;i++)
		for(j=0;j<n1;j++)
			scanf("%d",&A[i][j]);
			

			for(i=0;i<m1;i++)
				for(j=0;j<n1;j++)
					C[j][i]=A[i][j];
			printf("\n TRANSPOSE\n");
			for(i=0;i<m1;i++)
			{
				for(j=0;j<n1;j++)
				{
					printf("%d\t",C[i][j]);
				}
				printf("\n");
			}
			
}

void mult()
{
					int A[10][10],B[10][10],C[10][10],m1,n1,m2,n2,i,j,k,opt,sum;
	printf("Enter the number of rows and columns of matrix-A: ");
	scanf("%d%d",&m1,&n1);
	printf("Enter the matrix-A:");
	
	for(i=0;i<m1;i++)
		for(j=0;j<n1;j++)
			scanf("%d",&A[i][j]);
			
	printf("Enter the number of rows and columns of matrix-B: ");
	scanf("%d%d",&m2,&n2);
	printf("Enter the matrix-B:");
	
	for(i=0;i<m2;i++)
	{
		for(j=0;j<n2;j++)
		{
			scanf("%d",&B[i][j]);
			if(n1!=m2)
			{
				printf("Number of columns of 1st matrix and number of rows of 2nd matrix should be same\n");
				
			}
			else
			{
			
				for(i=0;i<m1;i++)
				{
					for(j=0;j<n2;j++)
					{
						sum=0;
						for(k=0;k<m2;k++)
						{
							sum=sum+A[i][k]*B[k][j];
						}
						C[i][j]=sum;
					}
				}
				
				printf("\n MATRIX PRODUCT\n");
				for(i=0;i<m1;i++)
				{
					for(j=0;j<n2;j++)
					{
						printf("%d\t",C[i][j]);
					}
					printf("\n");
				}
			}
		}
	}
}
void main()
{

	int opt;		
	printf("Enter the option: 1)Addition   2)Transpose   3)Multiplication : ");
	scanf("%d",&opt);
	switch(opt)
	{
		case 1:
			sum();
			break;
		case 2:
			trans();
			break;
		case 3:
			mult();
			break;
		default:
			printf("Invalid option");
	}
}
