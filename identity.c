#include<stdio.h>
int main()
{
    int m,n,count1=0,count2=0;
    printf("enter m and n value:\n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    int i,j;
    printf("Enter value for a matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        if(a[i][i]!=1)
        {
            count1=1;
        }
    }
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
          if(i==j)
          {
              continue;
          }
          else
          {
              if(a[i][j]!=0)
              count2=1;

          }
      }
    }
    
    if((count1||count2)==0)
    {
        printf("Given matrix is identity\n");
    }
    else
    {
        printf("Given matrix is not identity\n");
    }
    
    
  
    return 0;

}
