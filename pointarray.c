#include<stdio.h>
void fun(int brr[])
{
    int i;
    for(i=0;i<4;i++)
    {
        printf("%d\n",brr[i]);
    }
    brr[1]=256;
    printf("\n");
}
int main()
{
    int arr[]={100,200,300,400};
    int *ptr=arr;
    fun(ptr);
      int i;
    for(i=0;i<4;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("%d\n",arr[-5]);

}