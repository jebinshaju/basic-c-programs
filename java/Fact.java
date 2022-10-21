import java.util.*;
public class Fact
{
			public static void main(String[] args)
			{
				int i,f=1,n;
				Scanner sc=new Scanner(System.in);
				System.out.println("Enter Limit:");
				n=sc.nextInt();
				sc.close();
				
				for(i=1;i<=n;i++)
				{
					f=f*i;
				}
				System.out.println("Factorial="+f);
			}
}
