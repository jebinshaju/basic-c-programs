#include <stdio.h>
#include<string.h>
void reverse(char str[30])
{
	int n,i,j=0;
	char rev[30];
	n=strlen(str);
	for(i=n-1;i>=0;i--)
	{
		rev[j]=str[i];
		j++;
	}
	rev[j]='\0';
	printf("The reversed string is %s",rev);
}
 
int  main()
{
	char string[30];
	printf("Enter the string to reverse: ");
	scanf("%s",string);
	reverse(string);
	return 0;
}
