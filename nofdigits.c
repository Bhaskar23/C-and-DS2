#include<stdio.h>
int main()
{
    int a,b,count=0,rem;
    printf("Enter number:");
    scanf("%d",&b);
    a=b;
    while(a!=0)
    {
        count+=1;
        a=a/10;
    }
    printf("Entered Number is %d digits\n",count);
    return 0;
}