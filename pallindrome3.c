#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,j,n,flag=0;
	char str1[20],rev[20];
	printf("Enter the string: ");
	gets(str1);
	n= strlen(str1);
	j=n-1;
	for (i;i<n;i++)
	{
		rev[i]=str1[j];
		j--;
	}
	for (i=0;i<n;i++)
	{
		if (rev[i]!=str1[i])
			flag=1;
	}
	if (flag==0)
		printf("%s is pallindrome.",str1);
	else
		printf("%s is not pallindrome.",str1);
	return 0;
	}
