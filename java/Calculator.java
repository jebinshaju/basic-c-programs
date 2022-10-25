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
            System.out.print("Enter the operation(+,-,*,/,%),Enter x to exit\nEnter your option: ");
            op=sc.next().charAt(0);
			switch(op)
			{
				case('+'):
                System.out.print("Enter the first operant: ");
                a=sc.nextInt();
                System.out.print("Enter the second operant: ");
                b=sc.nextInt();
                    System.out.println("The sum is: "+(a+b));
                    break;

			    case('-'):
                System.out.print("Enter the first operant: ");
                a=sc.nextInt();
                System.out.print("Enter the second operant: ");
                b=sc.nextInt();
                    System.out.println("The difference is: "+(a-b));
                    break;

                case('*'):
                System.out.print("Enter the first operant: ");
                a=sc.nextInt();
                System.out.print("Enter the second operant: ");
                b=sc.nextInt();
				    System.out.println("The product is: "+(a*b));
                    break;

                case('%'):
                System.out.print("Enter the first operant: ");
                a=sc.nextInt();
                System.out.print("Enter the second operant: ");
                b=sc.nextInt();
                if (b==0)
                {
                    System.out.println("Division by 0 is not possible.");
                    break;
                }
                else
                {
                    System.out.println("The remainder is: "+(a%b));
                    break;
            }
                case('/'):
                System.out.print("Enter the first operant: ");
                a=sc.nextInt();
                System.out.print("Enter the second operant: ");
                b=sc.nextInt();
               
                    if (b==0)
                    {
                        System.out.println("Division by 0 is not possible.");
                        break;
                    }
                    else
                    {
                        System.out.println("The quotient is: "+(a/b));
                        break;
                    }
                case('x'):

                    flag=0;
                    break;
            }
		}
    sc.close();
	}
}