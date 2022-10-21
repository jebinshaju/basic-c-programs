#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three numbers: \n");
	scanf("%d %d %d",&a,&b,&c);
	
	if (a>b)
	{
		if (a>c)
		printf("%d is the greatest.",a);
		else
		printf("%d is the greratest.",c );
	}
	else if (b>a)
	{
		if (b>c)
		printf("%d is the greatest.",b);
		else
		printf("%d is the greratest.",c );
	}
	else
		printf("The two or more numbers are equal");
}
