#include<stdio.h>
void max(int[],int);
void min(int[],int);
int main()
{
    int size,i;
    printf("Enter size of array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements:\n");
    for(i=0;i<5;i++)
    scanf("%d",&arr[i]);
    max(arr,size);
    min(arr,size);
    return 0;
}
void max(int arr[],int size)
{
    int max=arr[0];
     for(int i=0;i<5;i++)
    {

           if(max<arr[i])
           {
               max=arr[i];
           }
           
    }
    printf("max:%d\n",max);

}
void min(int arr[],int size)
{
     int min=arr[0];
     for(int i=0;i<5;i++)
    {

           if(min>arr[i])
           {
               min=arr[i];
           }
           
    }
    printf("min:%d\n",min);

}