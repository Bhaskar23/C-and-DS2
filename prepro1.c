#include<stdio.h>
int main()
{
    #define computer "An amazing device\n"
    #ifdef computer
           printf(computer);
    #endif
    return 0;
}