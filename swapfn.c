#include<stdio.h>

//int swap(int,int);

void swap(int a,int b)
{
	int temp;
	printf("before swaping a=%d and b=%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("after swaping a=%d and b=%d",a,b);
}

void main()
{
	int x,y,r;
	printf("Enter 2 numbers to swap: ");
	scanf("%d %d",&x,&y);
	swap(x,y);	
}
