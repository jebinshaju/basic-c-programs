# include<stdio.h>
int main()
{
int a,b;
printf("Enter the values for a and b : ");
scanf("%d %d",&a,&b);
printf("Before swaping a holds %d and b holds %d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\nAfter swaping a holds %d and b holds %d",a,b);
return 0;
}

