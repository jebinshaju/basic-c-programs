#include<stdio.h>
#include<string.h>
int main()
{
	char str[20][20],temp[20];
	int j,i=0,n,k=0;
	
	printf("Enter the number of names: ");
	scanf("%d",&n);
	printf("Enter the name: \n");
	for (i;i<n;i++)
	{
		scanf("%s",str[i]);
		}		
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			if(strcmp(str[j],str[j+1])>0)
				{
 					strcpy(temp,str[j]);
					strcpy(str[j],str[j+1]);
 					strcpy(str[j+1],temp);
 				}
		}
	} 
	printf("After sorting names \n");
	for(k=0;k<n;k++)
	{
		printf("%s\n",str[k]);
	}
	return 0;
}

