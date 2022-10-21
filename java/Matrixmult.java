import java.util.Scanner;

public class Matrixmult
{
	public static void main(String[] args)
	{
		Scanner in=new Scanner(System.in);
		int i,j,m1,n1,m2,n2,sum,k;
		int[][] mat1 = new int[5][5];
		int[][] mat2 = new int[5][5];
		int[][] matmul = new int[5][5];
	
		System.out.print("Enter the row size of first matrix: ");
		m1=in.nextInt();
		System.out.print("Enter the column size of first matrix: ");
		n1=in.nextInt();
		System.out.println("Enter the matrix.");
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n1;j++)
			{
				System.out.print("Enter the element["+i+"]["+j+"]: ");
				mat1[i][j]=in.nextInt();
			}
		}
		System.out.println("The matrix.\n");
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n1;j++)
			{
				System.out.print(mat1[i][j]+"  ");
				
			}
			System.out.println();
		}
		
		System.out.print("Enter the row size of second matrix: ");
		m2=in.nextInt();
		System.out.print("Enter the column size of second matrix: ");
		n2=in.nextInt();
		System.out.println("Enter the matrix.");
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n1;j++)
			{
				System.out.print("Enter the element["+i+"]["+j+"]: ");
				mat2[i][j]=in.nextInt();
			}
		}
		System.out.println("The matrix.\n");
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n1;j++)
			{
				System.out.print(mat2[i][j]+"  ");
				
			}
			System.out.println();
		}
		
			if(n1!=m2)
			{
				System.out.println("Number of columns of 1st matrix and number of rows of 2nd matrix should be same\n");
				
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
							sum=sum+mat1[i][k]*mat2[k][j];
						}
						matmul[i][j]=sum;
					}
				}
				
				System.out.println("\n MATRIX PRODUcT\n");
				for(i=0;i<m1;i++)
				{
					for(j=0;j<n2;j++)
					{
						System.out.println(matmul[i][j]);
					}
					System.out.println("\n");
				}
			}
		}
	}
	


