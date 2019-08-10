#include<stdio.h>
#ifdef EXTENDED
         #define max_len 75
#else
         #define max_len 50
#endif
int main()
{
    printf("%d\n",max_len);
    return 0;
}