import java.util.Scanner;
public class Pallindrome
{
	public static void main(String[] args)
	{
		int num,i,len,flag=0;
		Scanner sc =new Scanner(System.in);
		System.out.println("\nProgram to check pallindrome");
		System.out.print("Enter the string: ");
		String str= sc.nextLine();
		
		len=str.length();
		
		for(i=0;i<len;i++)
		{
			if(str.charAt(i) != str.charAt(len-i-1))
			{
				flag= 1;
				break;
			}
		}
		if(flag==1)
		{
			System.out.println(str+" is not palindrome.");
		}
		else
		{
			System.out.println(str+" is palindrome.");
		}
	}
}
