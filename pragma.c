#include<stdio.h>
#pragma pack(1)
struct stu
{
    int a;
    char b;
    short c;
    float d;
    short e;
}s;
int main()
{
    printf("size=%lu\n",sizeof(s));
}