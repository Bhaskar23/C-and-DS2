#include<stdio.h>
int main()
{
    int  a=10;
    int *ptr=&a;
    printf("%p\n",ptr);
    ptr--;
     printf("%p\n",ptr);
     printf("\n");
     char ch='l';
     char *cptr=&ch;
     printf("%p\n",cptr);
      printf("%p\n",cptr--);
       printf("%p\n",cptr);

}