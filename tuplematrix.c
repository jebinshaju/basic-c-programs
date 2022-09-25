#include<stdio.h>

void readmatrix(int arr[20][20],int r,int c)
{
    int i,j;
    
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("Enter the element of [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    
}

void display(int arr1[20][20],int r,int c)
{
    int i,j;
    printf("\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("%d  ",arr1[i][j]);
        }
        printf("\n\n");
    }
    printf("\n");
}

int tuple(int arr[][20],int r,int c,int tup[20][20])
{
    int k=1;
    tup[0][0]=r;
    tup[0][1]=c;

    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            if (arr[i][j] != 0)
            {
                tup[k][0]=i;
                tup[k][1]=j;
                tup[k][2]=arr[i][j];
                k=k+1;
            }
        }
    }
    tup[0][2]=k-1;
    return k;
    
}

int transpose(int arr[20][20],int tra[20][20])
{
    int k=1,r=arr[0][1],c=arr[0][2];
    tra[0][0]=arr[0][1];
    tra[0][1]=arr[0][0];
    tra[0][2]=arr[0][2];

    for(int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            if(arr[j][i]==i)
            {
                tra[k][0]=arr[j][1];
                tra[k][1]=arr[j][0];
                tra[k][2]=arr[j][2];  
                k=k+1;  
            }
        }
    }
    return k;


}

int main()
{
    int a[20][20],b[20][20],r1,r2,c1,c2,tup1[20][20],tup2[20][20],tra1[20][20],tra2[20][20];
    printf("Enter the first matrix A.\n");
    printf("Enter the number of rows: ");
    scanf("%d",&r1);
    printf("Enter the number of columns: ");
    scanf("%d",&c1);
    readmatrix(a,r1,c1);

    display(a,r1,c1);

    printf("Enter the second matrix. B\n");
    printf("Enter the number of rows: ");
    scanf("%d",&r2);
    printf("Enter the number of columns: ");
    scanf("%d",&c2);
    readmatrix(b,r2,c2);

    display(b,r2,c2);

    printf("tuple matrix of A is\n");
    int k1=tuple(a,r1,c1,tup1);
    display(tup1,k1,3);

    printf("Transpose tuple of A\n");
    int t1= transpose(tup1,tra1);
    display(tra1,t1-1,3);

    printf("Tuple matrix of B is \n");
    int k2 = tuple (b,r2,c2,tup2);
    display(tup2,k2,3);

    printf("Transpose tuple of B\n");
    int t2= transpose(tup2,tra2);
    display(tra2,t2-1,3);   

}
