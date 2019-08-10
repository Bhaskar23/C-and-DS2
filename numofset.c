#include<stdio.h>
int main()
{
    int a,b,count=0,res=0;
    printf("Enter value:\n");
    scanf("%d",&a);
    for(int i=31;i>=0;i--)
    {
        b=a>>i;
        if(b&1)
        {
            count+=1;
        }
        else
        {
            res+=1;
        }
        
     }
     printf("Number of 1's = %d\n",count);
     printf("Number of 0's = %d\n",res);
    return 0;
}