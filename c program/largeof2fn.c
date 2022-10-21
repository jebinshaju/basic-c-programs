#include<stdio.h>


int large(int a,int b)
{
	int p;
	if(a>b)
		return a;
	else
		return b;
	
}

void main()
{
	int x,y,r;
	printf("Enter 2 numbers to compare: ");
	scanf("%d %d",&x,&y);
	r=large(x,y);
	printf("%d is the largest among %d and %d",r,x,y);
}
