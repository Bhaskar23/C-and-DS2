#include<stdio.h>
int main()
{
    int size,key,i,j;
    printf("Enter size of array:\n");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<size;i++)
    {
        key=a[i];
        j=i-1;
        while((j>=0)&&(a[j]>key))
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;

    }
    for(i=0;i<size;i++)
    {
        printf("%d d",a[i]);
    }
    
}