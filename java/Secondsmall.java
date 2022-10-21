import java.util.Scanner;

public class Secondsmall
{
	public static void main(String[] args)
	{
		Scanner in=new Scanner(System.in);	
		int[] arr = new int[20];
		int i,len,small,secsmall;
		System.out.print("Enter the number of elements of array:");
		len=in.nextInt();
		System.out.println("Enter the elements of array:");
		for(i=0;i<len;i++)
		{
			arr[i]=in.nextInt();
		}
		System.out.println("Elements of array:");
		for(i=0;i<len;i++)
		{
			System.out.print(arr[i]+" ");;
		}
		
		if(arr[0]<arr[1])
		{
			small=arr[0];
			secsmall=arr[1];
		}
		else
		{
			small=arr[1];
			secsmall=arr[0];
		}
		for(i=0;i<len;i++)
		{
			if(arr[i]<small)
			{
				small=arr[i];
			}
		}
		for(i=0;i<len;i++)
		{
			if(arr[i]<secsmall && arr[i]>small)
			{
				secsmall=arr[i];
			}
		}
		System.out.println("\nSecond samllest  elements of array: "+secsmall);
	}
}
