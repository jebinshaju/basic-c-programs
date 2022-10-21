#include<stdio.h>
int main()
{
	int *p1,*p2,a,b,sum;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	p1=&a;
	p2=&b;
	sum=*p1 + *p2;
	printf("The sum of %d and %d is %d",a,b,sum);
	return 0;
}
