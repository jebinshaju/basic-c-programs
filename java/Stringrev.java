import java.util.*;

public class Stringrev
{
	public static void main(String[] args)
	{
		Scanner in =new Scanner(System.in);
		String str,rev="";
		int i,len;
		
		System.out.print("Enter the string to reverse: ");
		str=in.nextLine();
		len=str.length();
		
		for (i=len-1;i>=0;i--)
		{
			rev=rev+str.charAt(i);
		}
		
		System.out.print("The reversed string is: "+rev);
	}
}
