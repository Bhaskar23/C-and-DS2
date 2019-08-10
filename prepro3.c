#include<stdio.h>
int main()
{
    #define buffer_size 258
    #if buffer_size< 256
    #error "buffer_size is too small"
    #elif 
    printf(" size is large\n");
    #endif

}