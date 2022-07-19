#include<stdio.h>
int main()
{
int ans,a,b,c,d,e,f,g;
printf("Enter the 7 values:");
scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
ans= ((a-b/c*d+e)*(f+g));
printf("The answer is : %d",ans);
return 0;
}

output

Enter the 7 values:1
2
3
4
5
6
7
The answer is : 78

