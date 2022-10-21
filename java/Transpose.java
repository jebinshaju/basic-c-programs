import java.util.Scanner;

public class Transpose
{
	public static void main(String[] args)
	{
		Scanner in=new Scanner(System.in);
		int i,j,row,col;
		int[][] mat = new int[5][5];
		int[][] transpose = new int[5][5];
	
		System.out.print("Enter the row size: ");
		row=in.nextInt();
		System.out.print("Enter the column size: ");
		col=in.nextInt();
		System.out.println("Enter the matrix.");
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				System.out.print("Enter the element["+i+"]["+j+"]: ");
				mat[i][j]=in.nextInt();
			}
		}
		System.out.println("The matrix.\n");
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				System.out.print(mat[i][j]+"  ");
				
			}
			System.out.println();
		}
		
		System.out.println("The transpose matrix.\n");
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				transpose[i][j]=mat[j][i];
			}
		}
		
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				System.out.print(transpose[i][j]+"  ");
				
			}
			System.out.println();
		}
	}
}
