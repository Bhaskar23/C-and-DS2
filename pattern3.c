#include<stdio.h>
int main()
{
    int n,i,k=0,x=1,y=1,d;
    printf("Enter number of rows:\n ");
    scanf("%d",&n);
    int z=1;;
    for(i=1;i<=n;i++,k=0,x=1)
    {
        d=i%2;
        while(k!=2*i-1)
        {
            if(d==1)
            {
                 if(x%2!=0)
                     {
                       printf("%d",y);
                       y++;
                     }
                      else
                     {
                     printf("*");
                     } 
            }
            else
            {
                   if(x%2!=0)
                     {
                       printf("%d",y);
                       y++;
                     }
                      else
                     {
                     printf("*");
                     }      
            }
             k++;
             x++;
         
        }
       printf("\n");
    }
    
}