#include<stdio.h>
void add(int a,int b)
{
    printf("%d\n",a+b);
}
void calci(void(*fptr)(int,int))
{
    fptr(20,30);
}
int main()
{
    calci(add);
}
