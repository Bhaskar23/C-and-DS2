#include<stdio.h>
int main()
{
    int i=0,n;
    printf("Enter value:\n");
    scanf("%d",&n);
for(i=1;i<10;i++)
{
    while(n%(i*i)==0)
    {
        printf("%d is perfect square\n",n);
        break;
    }
    
}
return 0;
}