#include<stdio.h>
int main()
{
    unsigned char a=17;
    a=a<<~1;
    printf("a=%d\n",a);
    return 0;
}