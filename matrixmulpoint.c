#include<stdio.h>
int multi(int [],int [],int[]);
int main()
{
    int m,n,x,y;
    printf("Enter No.of Rows and Columns for A:\n");
    sacnf("%d %d",&m,&n);
    int *a[m][n];
    int *b[x][y];
    int *c[m][n];
    printf("Enter elements:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",*(*(a+i)+j));
        }
    }
    printf("Enter No.of Rows and Columns for B:\n");
    sacnf("%d %d",&x,&y);
    if(n!=x)
    {
        printf("Matrix Multiplication is not possible\n");
    }
    else
    {
         printf("Enter elements:\n");
             for(int i=0;i<x;i++)
                {
                   for(int j=0;j<y;j++)
                     {
                       scanf("%d",*(*(b+i)+j)); 
                       }
                 }

    }
    multi(a,b,c);
}
int multi(int *a,int *b,int *c)
{
    int i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            int sum=0;
            for(k=0;k<3;k++)
            {
                sum=sum+(*(*(a+i)+k))*(*(*(b+k)+j));
            }
        }

    }
}