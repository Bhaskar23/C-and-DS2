#include<stdio.h>
int main()
{
    int a;
    printf("Enter a value:\n");
    scanf("%d",&a);
    if(a>0)
    {
        printf("a is positive\n");
    }
    else if(a==0)
    {
        printf("a is zero\n");
    }
    else
    {
        printf("a is negative\n");
    }
    return 0;
}