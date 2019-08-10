#include<stdio.h>
int main()
{
    int n,i,space,k=0,x=0,z=0,y=0;
    printf("Enter Number of Rows:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++,k=0,z=1)
    {
        x=i;y=2;
        for(space=1;space<=n-i;space++)
        {
            printf(" ");
        }
       while(k!=i)
        {
            printf("%d",x);
            x--;
            k++;

        }
        if(i==1)
        {
            printf("\n");
            continue;
           
        }
        else
        {
              while(z!=i)
                {
                    z++;
                    printf("%d",y);
                    y++;
           
                }
        }
        printf("\n");

    }

}