#include<stdio.h>

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

    printf("The tuple matrix \n");

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

int tupleadd(int tup1[20][20],int tup2[20][20],int sumtup[20][20])
{
    int r1=tup1[0][0],r2=tup2[0][0],c1=tup1[0][1],c2=tup2[0][1],i,j,m=1,n=1,k=1;
    
    if(r1 == r2 && c1 == c2)
    {
        sumtup[0][0]=r1;
        sumtup[0][1]=c1;
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                if(tup1[m][0]==i && tup1[m][1]==j && tup2[n][0]==i && tup2[n][1]==j)
                {
                    sumtup[k][0]=tup1[m][0];
                    sumtup[k][1]=tup1[m][1];
                    sumtup[k][2]=tup1[m][2]+tup2[n][2];
                    k++;
                    m++;
                    n++;
                }
                else if(tup1[m][0]==i && tup1[m][1]==j)
                {
                    sumtup[k][0]=tup1[m][0];
                    sumtup[k][1]=tup1[m][1];
                    sumtup[k][2]=tup1[m][2];
                    k++;
                    m++;
                }
                else if(tup2[n][0]==i && tup2[n][1]==j)
                {
                    sumtup[k][0]=tup2[n][0];
                    sumtup[k][1]=tup2[n][1];
                    sumtup[k][2]=tup2[n][2];
                    k++;
                    n++;
                }
            }
        }
        sumtup[0][2]=k-1;
        return k;


    }
    else if(r1 != r2 || c1 != c2)
    {
        printf("Addition not possible.");
    }
    
    
}

int main()
{
    int arr1[20][20],arr2[20][20],tup1[20][20],tup2[20][20],add[20][20],i,j,p,q,r1,c1,r2,c2;
    printf("Enter the number of rows of matrix1: ");
    scanf("%d",&r1);
    printf("Enter the number of columns of matrix1: ");
    scanf("%d",&c1);

    for (i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("Enter the element of [%d][%d]: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }

    display(arr1,r1,c1);
    
    int x = tuple(arr1,r1,c1,tup1);
    display(tup1,x,3);

    printf("Enter the number of rows of matrix2: ");
    scanf("%d",&r2);
    printf("Enter the number of columns of matrix2: ");
    scanf("%d",&c2);

    for (p=0;p<r1;p++)
    {
        for(q=0;q<c1;q++)
        {
            printf("Enter the element of [%d][%d]: ",p,q);
            scanf("%d",&arr2[p][q]);
        }
    }

    display(arr2,r2,c2);

    tuple(arr2,r2,c2,tup2);
    display(tup2,x,3);

    int y =tupleadd(tup1,tup2,add);

    display(add,y,3);

}
