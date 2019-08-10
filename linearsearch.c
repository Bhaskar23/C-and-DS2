#include<stdio.h>
void search(int[],int);
int main()
{
    int size;
    printf("Enter size of elements:\n");
    scanf("%d",&size);
    int a[size];
    search(a,size);
}
void search(int a[],int size)
{
    int search,count=0;
    int i;
    printf("Enter elements:\n");
    for( i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter search element:\n");
    scanf("%d",&search);

    for(i=0;i<size;i++)
    {
        if(search==a[i])
        {
           count=i+1;
        }
    }
    if(count==0)
    {
        printf("%d is not present\n",search);
    }
    else
    {
        printf("%d is found at %d\n",search,count);
    }
    
    
}