#include<stdio.h>
int main()
{
    int i,j,count=1,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j<i)
            printf("%d*",count++);
            else
            printf("%d",count++);
        }
        printf("\n");
    }
    count=count-n;
     for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            if(j<i)
            printf("%d*",count++);
            else
            printf("%d",count++);
        }
        count=(count+1)-2*i;
        printf("\n");
    }

    
}