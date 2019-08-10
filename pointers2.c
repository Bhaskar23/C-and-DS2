#include<stdio.h>
int main()
{
    char str[]="varsity";
    char *ptr=str;
    printf("%c\n",++*ptr);
    printf("%s\n",str);
     printf("%c\n",*ptr++);
      printf("%s\n",ptr);
       printf("%s\n",str);
        
}