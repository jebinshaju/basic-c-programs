#include<stdio.h>
#include<string.h>
int main()
{
	 char str1[20];
	 int j=0,n,v=0,c=0,s=0,i=0;
	 printf("Enter the string: ");
	 gets(str1);
	 n=strlen(str1);
	 for (j=0;j<n;j++)
	 {
	 	if (str1[j]== 'a' || str1[j]== 'e' || str1[j]== 'i' || str1[j]== 'o' || str1[j]== 'u' || str1[j]== 'A' || str1[j]== 'E' || 			str1[j]== 'I' || str1[j]== 'O' || str1[j]== 'U' )
	 	{
	 		++v;
	 	}
	 	else if (isdigit(str1[j]) )
	 	{
	 		++i;
	 	}
	 	else if(str1[j] == ' ')
	 	{
	 		++s;
	 	}
	 	else
	 	{
	 		++c;
	 	}
	 }
	 printf("The number of consonants: %d \nThe number of vowels: %d \nThe number of digits: %d \nThe number of white spaces: %d \n",c,v,i,s);
return 0;
}
