#include<stdio.h>

int add(int,int);

int add(int a,int b)
{
	int p;
	p=a+b;
	return p;
}

void main()
{
	int x,y,r;
	printf("Enter 2 numbers to add: ");
	scanf("%d %d",&x,&y);
	r=add(x,y);
	printf("%d is the sum of %d and %d",r,x,y);
}
