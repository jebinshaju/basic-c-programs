#include<stdio.h>
 int main()
 {
 int a,b;
 char op;
 
 printf("Enter the operators (+,-,*,/,remainder): ");
 scanf("%c",&op);
 printf("Enter the two numbers: ");
 scanf("%d %d",&a,&b);
 
 switch(op)
 {
 case'+':
 printf("%d + %d = %d",a,b,a+b);
 break;
 case '-':
 printf("%d - %d = %d",a,b,a-b);
 break;
 case '*':
 printf("%d * %d = %d",a,b,a*b);
 break;
 case '/':
 printf("%d / %d = %d",a,b,a/b);
 break;
 case '%':
 printf("remainder of %d / %d = %d",a,b,a%b);
 break;
 default:
 printf("Invalid operator.");
 }
 return 0;
 }
