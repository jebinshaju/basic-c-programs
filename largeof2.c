# include<stdio.h>
int main()
{
int a,b,large;
printf("Enter the two numbers to compare: ");
scanf("%d %d",&a,&b);
large = (a>b)?a:b;
printf("The large among %d and %d is %d",a,b,large);
return 0;
}
