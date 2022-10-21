import java.util.*;
public class Oddeven
{
			public static void main(String[] args)
			{
				int n;
				Scanner sc=new Scanner(System.in);
				System.out.println("Enter number to check:");
				n=sc.nextInt();
				sc.close();
				
				if(n%2==0)
				{
					System.out.println(n+" is even");
				}
				else
				{
					System.out.println(n+" is odd");
				}
			}
}
