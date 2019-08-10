#include<stdio.h>
#define MAX
int main()
{
    #if defined(MAX)
    printf("Hello\n");
    #else
       printf("Word\n");
    #endif
       printf("\n");
    #if !defined(MIN)
        printf("Fox\n");
    #else
        printf("Duck\n");
    #endif
    return 0;

}