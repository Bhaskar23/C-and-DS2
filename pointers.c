#include<stdio.h>
int main()
{
    int a=12;
    char ch='h';
    float f=5.6;
    double d=7.8;
    int *iptr=&a;
    char *cptr=&ch;
    float *fptr=&f;
    double *dptr;
    dptr=&d;
     printf("%lu %lu\n",&a,iptr);
      printf("%lu %lu\n",&ch,cptr);
       printf("%lu %lu\n",&f,fptr);
        printf("%lu %lu\n",&d,dptr);
        printf("%lu %d\n",sizeof(iptr),sizeof(a));
        printf("%lu %d\n",sizeof(cptr),sizeof(ch));
        printf("%lu %d\n",sizeof(fptr),sizeof(f));
        printf("%lu %d\n",sizeof(dptr),sizeof(d));
        *iptr=89;
    

}