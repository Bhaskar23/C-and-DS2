#include<stdio.h>
int main()
{
    int n;
    printf("Enter value:\n");
    scanf("%d",&n);
    for(int i=0;i<25;i++);
    {
        if(n%(i*i)==0)
        {
            printf("%d is perfect square of %d",n,i);
        }
    }
    return 0;
}