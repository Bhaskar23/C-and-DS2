#include<stdio.h>
int main()
{
    int a,b,sum=0,rem;
    printf("Enter number:");
    scanf("%d",&b);
    a=b;
    while(a!=0)
    {
        rem=a%10;
        sum=rem+10*sum;
        a=a/10;
    }
    if(b==sum)
    {
        printf("Given number %d is palindrome\n",b);
    }
    else
    {
        printf("Given number %d is not palindrome\n",b);
    }
    return 0;
}