#include<stdio.h>
int main()
{
    int n=3,i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;i<3;j++)
        {
            if(i==1&&j==1)
            {
                printf("%d ",n-2);
            }
            else if(i==2&&j==1)
            {
                printf("%d ",n-1);
            }
            else
            {
                printf("%d ",n);
            }
            
        }
        printf("\n");
    }
}