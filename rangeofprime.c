#include<stdio.h>
int main()
{
    int a,i,j,count;
    printf("Enter number:\n");
    scanf("%d",&a);
    for(j=1;j<a;j++,count=0)
    {
          for(i=1;i<=j;i++)
            {
              if(j%i==0)
                {
                   count++;
                }
             }
            if(count==2)
            {
            printf("%d,",j);
            }

    }
  
    
}