#include<stdio.h>
int main()
{
int a;

printf("Enter the number to check: ");
scanf("%d",&a);

if (a<0)

printf("%d is a negative number.",a);

else
printf("%d is a positive number.",a);

return 0;
}
