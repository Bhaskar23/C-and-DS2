#include<stdio.h>
int main()
{
    int a,i,j,count=0;
    printf("Enter number:\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("Prime Number\n");
    }
    else
    {
        printf("Not Prime Number\n");
    }
    
}