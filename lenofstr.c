#include<stdio.h>
int length(char a[]);
int main()
{
    char a[100];
    printf("Enter the string:\n");
    gets(a);
    int x=length(a);
    printf("length of given  string=%d",x);

}
int length(char a[])
{
    int i=0;
    while(a[i]!='\0')
    {

       i++;
    }
    return i;
}