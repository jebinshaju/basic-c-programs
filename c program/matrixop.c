#include<stdio.h>
int multi(int a[][],int b[][],r,c)
{
	int i,j,k,mult[50][50];
	if (r == c)
	{
		for(i=0;i<r;i++)
		{
			for (j=0;j<c;j++)
			{
				mult[i][j]=0;
				for(k=0;k<c;k++)
				{
					mult[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
		return mult[][];
	}
	else
		printf("The number of column and rows does not match.")	
}

int add(int a[][],int b[][],r,c)
{
	int i,j,k,sum[50][50];
	if (r == c)
	{
		for(i=0;i<r;i++)
		{
			for (j=0;j<c;j++)
			{				
				sum[i][j]+=a[i][j]+b[i][j];			
			}
		}
		return sum[][];
	}
	else
		printf("The number of column and rows does not match.")	
}

int trans(int a[][],r,c)
{
	int i,j,k,tran[50][50];
	if (r == c)
	{
		for(i=0;i<r;i++)
		{
			for (j=0;j<c;j++)
			{				
				tran[j][i]=a[i][j];			
			}
		}
		return trans[][];
	}
	else
		printf("The number of column and rows does not match.")	
}

void main()
{
	int i,j,
}

