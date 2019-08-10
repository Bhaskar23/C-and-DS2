#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50,60,70,80,90};
    int (*ptr)[3]=a;
    printf("ptr=%u\n",ptr);
    ptr++;
    printf("updated=%u\n",ptr);
    int i;
    for(i=3;i>0;i--)
    {
        printf("%d\n",*(*ptr-i));
    }
    return 0;
}