#include<stdio.h>
int main()
{
    int m,n;
    printf("enter m and n value:\n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    int b[m][n];
    int c[m][n];
    int i,j;
    printf("Enter value for a matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");d
    }
    printf("Enter value for b matrix:\n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
          c[i][j]=a[i][j]+b[i][j];
        }
    }
    
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
          printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;

}
