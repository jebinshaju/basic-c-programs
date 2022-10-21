# include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the values for a and b : ");
scanf("%d %d",&a,&b);
printf("Before swaping a holds %d and b holds %d",a,b);
c=b;
b=a;
a=c;
printf("\nAfter swaping a holds %d and b holds %d",a,b);
return 0;
}


