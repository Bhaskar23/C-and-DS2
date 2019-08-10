#include<stdio.h>
void fun(int *);
int main()
{
    int a=10;
    printf("before fun call a=%d\n",a);
    fun(&a);
    printf("after fun call a=%d\n",a);
    return 0;
}
void fun(int *a)
{
    *a=*a*2;
    printf("In fun a=%d\n",*a);
}