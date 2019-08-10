#include<stdio.h>
#define queuesize 5
int f=0,r=-1,q[queuesize];
void insert(int);
int delete();
void display();
int main()
{
    insert(10);
    insert(20);
    insert(30);
    display();
    insert(70);
    printf("Element deleted:%d\n",delete());
    insert(60);
    insert(40);
    insert(50);
    display();
    printf("Element deleted:%d\n",delete());
    printf("Element deleted:%d\n",delete());
      display();
    printf("Element deleted:%d\n",delete());
    printf("Element deleted:%d\n",delete());
    printf("Element deleted:%d\n",delete());
    return 0;
}
void insert(int item)
{
    if(r==queuesize-1)
    {
        printf("Queue is full\n");
        return;
    }
    q[++r]=item;
}
int delete()
{
    int ele;
    if(f>r)
    {
        printf("Queue is empty\n");
        return 0;
    }
    ele=q[f++];
    return ele;
}
void display()
{
    int i;
     if(f>r)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Elements are:\n");
    for(i=f;i<=r;i++)
    {
        printf("%d ",q[i]);
        
    }
    printf("\n");
}