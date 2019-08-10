#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char  arr[]="cranes";
    char brr[]="cranes";
    int(*fptr)(const char*,const char*);
    fptr=strcmp;
    int a=fptr(arr,brr);
    if(a)
    printf("strings are not same\n");
    else
    printf("strings are same\n");
    
}