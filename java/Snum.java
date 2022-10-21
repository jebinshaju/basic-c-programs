import java.util.*;
public class Snum
{
			public static void main(String[] args)
			{
				int d,s=0,n,num;
				
				Scanner sc=new Scanner(System.in);
				System.out.println("Enter Num:");
				n=sc.nextInt();
				sc.close();
				
				while(n>0)
				{
					d=n%10;
					s=s+d;
					n=n/10;
				}
				
				System.out.println("Sum of digits is ="+s);
			}
}				
