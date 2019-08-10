#include<stdio.h>
int main()
{

   int i,n,space,k=0;
   printf("Enter number of rows:\n");
   scanf("%d",&n);
   for(i=n-1;i>=1;--i,k=0)
    {
        for(space=1;space<=n-i;++space)
        {
            printf(" ");
        }
        while(k!=1)
        {
            printf("*");
            ++k;
        }
       printf("\n"); 
    }
   
}
