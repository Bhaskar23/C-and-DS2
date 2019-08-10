#include<stdio.h>
int main()
{
    char str[]="India";
    char *ptr=str;
    printf("%d\n",sizeof(ptr));
    printf("%d\n",sizeof(str));
    printf("string is %s\n",ptr);
    printf("address =%p\n",ptr);
    printf("%c\n",*ptr++);
    printf("%p\n",ptr);
    printf("%s\n",ptr);
    printf("%c\n",++*ptr);
    printf("actual string is %s\n",str);
    printf("%c\n",*--ptr);
    printf("%c\n",*++ptr);
    printf("%c \n",*ptr++);
    printf("%c \n",*ptr--);
}