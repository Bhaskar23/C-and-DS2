    #include <stdio.h>
    #include<string.h>
    void rev(char s1[]);
    void palin(char s1[],char s2[]);
    int main()
    {
        char s1[100], s2[100], i, j;
        printf("Enter first string:\n");
        gets(s1);
        strcpy(s2,s1);
        rev(s2);
        printf("after rev:%s\n",s2);
        
        palin(s1,s2);
        return 0;
    }
void rev(char s2[])
    {
         int i=0;
         char temp;
         int j = strlen(s2) - 1;
 
          while (i < j) {
         temp = s2[i];
         s2[i] = s2[j];
         s2[j] = temp;
         i++;
         j--;
   }
 
    
    }
void palin(char s1[],char s2[])
{
    int a=strcmp(s1,s2);
    if(a==0)
    {
        printf("palindrome\n");
    }
    else
    {
        printf("not palindrome\n");
    }
    
}