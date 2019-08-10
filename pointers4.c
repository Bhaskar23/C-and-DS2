#include<stdio.h>
int main()
{
    int a=10;
    int *ptr=&a;
    int **ptr1=&ptr;
    int ***ptr2=&ptr1;
    int ****ptr3=&ptr2;
    int  *****ptr4=&ptr3;
    printf("%d\n",*****ptr4);
    return 0;
}