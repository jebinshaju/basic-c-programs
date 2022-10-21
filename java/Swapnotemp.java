import java.util.*;
public class Swapnotemp
{
	public static void main(String[] args)
	{
		int a,b;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter 1st num:");
		a=sc.nextInt();
	
		System.out.println("Enter 2nd num:");
		b=sc.nextInt();
	
		sc.close();
	
		System.out.println("Before Swapping a="+a+" b="+b);
		a=a+b;
		b=a-b;
		a=a-b;
	    System.out.println("After Swapping a="+a+" b="+b);
	 }
}	 
	    
		
