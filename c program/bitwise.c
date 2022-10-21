# include<stdio.h>
int main()
{
int a,b,p,q,r,s,t;
printf("Enter 2 the values ::  ");
scanf("%d %d",&a,&b);
p=a&b;
q=a| b;
r=a^b;
s=a<<2;
t=a>>2;
printf("%d and %d = %d\n%d or %d = %d\n%d xor %d = %d\n%d <<2 = %d\n%d >>2 = %d\n",a,b,p,a,b,q,a,b,r,a,s,a,t);
return 0;
}


