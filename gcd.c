#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a[10],b[10];
    int n1,n2;
    int x=1;
    printf("Enter two values:\n");
    scanf("%d %d",&n1,&n2);
    for(int i=1;i<=n1;i++)
    {
        if(n1%i==0)
        {
            a[x]=i;
            ++x;
        }
    }
    for(int j=1;j<=n2;j++)
    {
        if(n2%j==0)
        {
            b[x]=j;
            ++x;
        }
    }
    for(x=10;x>0;x--)
    {
        if(a[x]==b[x])
        {
            printf("GCD is %d\n",a[x]);
            break;
        }
    }
    return 0;
}