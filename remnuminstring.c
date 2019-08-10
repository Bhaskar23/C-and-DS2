#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    printf("enter string:\n");
    gets(a);
    int size=strlen(a);
    int j=0,i;
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z')||(a[i]=='\0'))
        {
          b[j]=a[i];
          j++;
        }
    }
    printf("%s",b);
}