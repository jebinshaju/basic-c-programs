#include<stdio.h>

struct distance
{
	int dis;
}d1,d2;

void main()
{
	int sum;
	printf("Enter the first distance: ");
	scanf("%d",&d1.dis);
	
	printf("Enter the second distance: ");
	scanf("%d",&d2.dis);
	
	sum=d1.dis + d2.dis;
	printf("The sum of the distances is: %d",sum);
}
