#include<stdio.h>
#include<string.h>
void sort(char **ptr)
{
    int i;
    for(i=0;i<4;i++)
    {
        printf("%s\n",ptr[i]);
    }
}
int main()
{
    char *arr[15]={"cran","vars","bang","indi"};
    sort(arr);
   
}