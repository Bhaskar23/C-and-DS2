#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50],c[50];
    int i=0,j=0,k=0,count=0;
    printf("Enter string:\n");
    gets(a);
    printf("Enter substring:\n");
    gets(b);
    printf("Enter string replace:\n");
    gets(c);
    while(a[i]!='\0'&&b[j]!='\0')
    {
        if(a[i]==b[j])
        {
            count++;
            a[i]='z';
            i++;
            j++;
        }
        else
        {
            i++;
            
        }
        
    }
    if(count==strlen(b))
    printf("substring is present\n");
    else
    {
        printf("substring is not present\n");
    }
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='z')
        {
            a[i]=c[k];
            k++;
        }
    }
     
     printf("Replace string\n");
      printf("%s\n",a);
   
  


}