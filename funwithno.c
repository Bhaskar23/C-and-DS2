#include<stdio.h>
void add(int,int);
int main()
{
    int a=20,b=40;
    add(a,b);
}
void add(int a,int b)
{
    int sum=a+b;
    printf("sum=%d\n",sum);
}