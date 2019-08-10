#include<stdio.h>
int main()
{
int a=258;
char *ptr= &a;
printf("*ptr=%d\n",*ptr);
printf("a=%d\n",a);
printf("size=%u\n",sizeof(ptr));
}