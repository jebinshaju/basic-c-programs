# include<stdio.h>
int main()
{
int n,m,d;
printf("Enter the number of days:  ");
scanf("%d",&n);
m=n/30;
d=n%30;
printf("Considering a month to be 30 days %d days is %d months and %d days",n,m,d);
return 0;
}

