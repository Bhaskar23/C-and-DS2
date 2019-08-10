#include<stdio.h>
#define larg(a,b) (a>b)?a:b
int main()
{
    int a,b;
    printf("Enter a and b values:\n");
    scanf("%d %d",&a,&b);
    printf("%d is largest\n",larg(a,b));
    return 0;
}