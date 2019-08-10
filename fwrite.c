#include<stdio.h>
#include<stdlib.h>
struct tag
{
    int a;
    float f;
    char str[20];   
}s1={2,5.6,"cranes"},s2;
int main()
{
    FILE *fp=fopen("mallo.txt","w+");
    if(fp==NULL)
    {
        printf("file doesnt exists\n");
        exit(2);
    }
    fwrite(&s1,sizeof(s1),1,fp);
    rewind(fp);
    fread(&s2,sizeof(s2),1,fp);
    printf("%d %f %s\n",s2.a,s2.f,s2.str);
}
