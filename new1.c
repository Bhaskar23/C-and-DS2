#include<stdio.h>
int factorial(int fact)
{


     int i=1;
     if(fact==0||fact==1)
    {
        return 1;
    }
    while(fact>1)
    {
        i=i*fact;
        --fact;
    }
    return i;
}