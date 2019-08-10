#include<stdio.h>
void fun(int *);
int main()
{
    int arr[]={10,20,30,40};
    int *ptr=&arr[1];
    fun(ptr);
}
void fun(int *ptr)
{
    printf("inside function\n");
    int i;
    for(i=0;i<3;i++)
    {
        printf("%d\n",*(ptr+i));
        
    }
}
