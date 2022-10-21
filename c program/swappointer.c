#include<stdio.h>

void swap(int *p1, int *p2)
{
	int temp;
	temp=*p2;
	*p2 =*p1;
	*p1=temp;
}

void main()
{
	int a,b;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	printf("The values before swaping a= %d ,b=%d ",a,b);
	swap(&a,&b);
	printf("\nThe values after swaping a= %d ,b=%d ",a,b);
}
