import java.util.Scanner;
public class Freqcount
{
	public static void main(String[] args)
	{
		int i,count=0,len;
		System.out.println("\nProgram to count the frequency of a character.");
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the string: ");
		String str=sc.nextLine();
		System.out.print("Enter the character to check: ");
		char ch=sc.next().charAt(0);
		len=str.length();
		
		for(i=0;i<len;i++)
		{
			if (str.charAt(i)==ch)
			{
				count++;
			}
		}
		if (count==0)
		{
			System.out.println(ch+" is not found.");
		}
		else
		{
			System.out.println(ch+" is found "+count+" times in "+str);
		}
		
	}
}
