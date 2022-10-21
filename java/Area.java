import java.util.*;
public class Area
{
	public static void main(String[] args)
	{
     	double area;
     	int r;
     	Scanner sc=new Scanner(System.in);
	    System.out.println("Enter  Radius: ");
	    r=sc.nextInt();
	    sc.close();
	
     	area=3.14*r*r;
     	System.out.println("area is = "+area);
	}
}
