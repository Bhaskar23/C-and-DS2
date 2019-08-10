#include<stdio.h>
int main()
{
    int i,space,n,k=0,z,x=0;
    printf("Enter n value:\n");
    scanf("%d",&n);
    n=z;
    for(i=1;i<=n;++i,k=0)
    {
        for(space=1;space<=n-i;++space)
        {
            printf(" ");
        }
        while(k !=1)
            {
                printf("/");
                printf("\\");
                ++k;
            }
        
    printf("\n");
    }
    
}