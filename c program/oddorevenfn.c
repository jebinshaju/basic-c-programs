#include<stdio.h>
void oddoreven(int);

void main()
{
	int x;
	printf("Enter a digit to check whether it is odd or even");
	scanf("%d",&x);
	oddoreven(x);
}


void oddoreven(int a)
{
	if (a%2==0)
		printf("%d is even.",a);
	else
		printf("%d is odd.",a);
}


