#include<stdio.h>
int main()
{
    int n,i,k=0,x;
    printf("Enter x:\n");
    scanf("%d",&x);
    printf("Enter number of rows:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++,k=0)
    {
        while(k!=i)
        {
            printf("%d",x);
            k++;
        }
        ++x;
        printf("\n");
    }
    for(i=n-1;i>=1;i--,k=0)
    {
        while(k!=i)
        {
            printf("%d",x-2);
            k++;
        }
        x--;
        printf("\n");
    }
    return 0;
}