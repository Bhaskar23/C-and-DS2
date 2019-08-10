#include<stdio.h>
int main()
{
    int a,b,temp,t,l;
    printf("Enter a and b value:\n");
    scanf("%d %d",&a,&b);
    int p=a*b;
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    do{
        t=a%b;
        a=b;
        b=t;
    }while(b!=0);
    printf("GCD of given numbers is %d\n",a);
     l=p/a;
    printf("LCM of given numbers is %d\n",l);
    return 0; 
}
