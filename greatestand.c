#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a,b,c values:");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&(a>c))
    {
        printf("a is greatest\n");
    }
    else if(b>c)
    {
        printf("b is greatest\n");
    }
    else
    {
        printf("c is greatest\n");
    }
    return 0;
}