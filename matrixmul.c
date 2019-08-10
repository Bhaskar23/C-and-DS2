#include<stdio.h>
int main()
{ 
    int m,n,x,y,sum=0,i,j;
    int a[10][10],b[10][10],c[10][10];
    printf("Enter rows and colums for a:\n");
    scanf("%d %d",&m,&n);
    printf("Enter value for a matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter rows and colums for b:\n");
    scanf("%d %d",&x,&y);
    if(n!=x)
    {
        printf("Multiplication not possibe\n");
    }
    else
    {
        printf("Enter value for b matrix:\n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf(" %d",&b[i][j]);
        }
    }

     for(i=0;i<m;i++)
        {
          for(j=0;j<y;j++)
            {
                 for(int k=0;k<x;k++)
                   {
                       sum=sum+a[i][k]*b[k][j];
                   }
                   c[i][j]=sum;
                   sum=0;
          
            }
        }
        printf("\n");
        printf("Mutlipication of a and b:\n");
    for(i=0;i<m;i++)
       {
        for(j=0;j<y;j++)
           {
          printf("%d ",c[i][j]);
           }
          printf("\n");
       }

    }
    
    return 0;

}
