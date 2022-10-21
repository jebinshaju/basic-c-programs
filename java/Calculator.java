import java.util.Scanner;
public class Calculator
{
	public static void main(String[] args)
	{
		int a,b,flag=1;
		char op;
		Scanner sc =new Scanner(System.in);
		System.out.println("Calculator.");
		while(flag==1)
		{
			System.out.print("Enter the first operant: ");
			a=sc.nextInt();
			System.out.print("Enter the second operant: ");
			b=sc.nextInt();
			System.out.print("Enter the operation(+,-,*,/,%)\nEnter x to exit: ");
			op=sc.next().charAt(0);
			switch(op)
			{
				case(+):
				
					System.out.println(a+b)
				
			}
		}
	}
}
