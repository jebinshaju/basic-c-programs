# include<stdio.h>
int main()
{
int c;
float f;
printf("Enter the temperature in celcius: ");
scanf("%d",&c);
f=((c*9)/5)+32;
printf("%d celcius is equal to %0.2f farenheit",c,f);
return 0;
}
