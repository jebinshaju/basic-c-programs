#include<stdio.h>
int main()
{
	int *p,i,a[30],n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	p=a;
	printf("Enter the elements: ");
	for (i=0;i<n;i++)
	{
		scanf("%d",p);
		p++;
	}
	printf("The elements are: ");
	p=a;
	for (i=0;i<n;i++)
	{
		printf("%d , ",*p);
		p++;
	}
}

