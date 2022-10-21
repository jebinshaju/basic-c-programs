#include<stdio.h>
int main()
{
	float avg,sum=0;
	int i,n;
	printf("Enter the number of elements: \n");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++)
	{
		printf("Enter the %d th element: ",i+1);
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		sum=sum+a[i];	
	}
	avg=sum/n;
	printf("%0.2f is the average and %0.2f is the sum.",avg,sum);
	return 0;
	
}
