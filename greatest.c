#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a and b:\n");
    scanf("%d %d",&a,&b);
    if(a==b)
    {
        printf("a and b equal\n");
    }
    else if(a>b)
    {
        printf("a is greatest\n");
    }
    else
    {
        printf("b is greatest\n");
    }
    return 0;
}