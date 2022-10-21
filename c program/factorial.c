#include<stdio.h>

int fact(int n)
{
	if (n==1|| n==0)
		return 1;
	else
		return (n*fact(n-1));
}

int factwithout(int n)
{
    int fct=1,i;
    for(i=1;i<=n;i++)
    {
        fct=fct*i;
    }
    return fct;
}

void main()
{
	int n,x,op;

	printf("Enter 1 for factorial using recrusion\nEnter 2 for factorial without recrusion:\nEnter your option:  ");
	scanf("%d",&op);
	printf("Enter the number to find factorial:: ");
	scanf("%d",&n);
	switch (op)
	{
	    case 1 : 
	        x=fact(n);
	        break;
	    case 2 :
	        x=factwithout(n);
	        break;
	}
	
	printf("The factorial of %d is %d.",n,x);

}