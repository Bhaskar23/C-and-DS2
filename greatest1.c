#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a,b,c values:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("a is greater\n");
        }
        else
        {
            printf("c is greater\n");
        }
    }
    else if(b>c)
    {
        printf("b is greater\n");
    }
    else
    {
        printf("c is greater\n");
    }
    
    return 0;
}