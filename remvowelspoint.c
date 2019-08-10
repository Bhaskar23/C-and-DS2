#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    printf("Enter the string:\n");
    gets(a);
    char *ptr=a;
    for(int i=0;ptr[i]!='\0';i++)
    {
        if((ptr[i]=='a')||(ptr[i]=='e')||(ptr[i]=='i')||(ptr[i]=='o')||(ptr[i]=='u')||(ptr[i]=='A')||(ptr[i]=='E')||(ptr[i]=='I')||(ptr[i]=='O')||(ptr[i]=='U'))
        {
             
        }
        else
        {
            printf("%c",ptr[i]);
        }
        
       
    }
        
}