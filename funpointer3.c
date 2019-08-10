#include<stdio.h>
void add(int x,int y)
{
    printf("sum=%d",x+y);
}
void sub(int x,int y)
{
    printf("sub=%d",x-y);
}
int main()
{
    int ch,x,y;
    printf("Enter x and y:\n");
    scanf("%d %d",&x,&y);
    void (*fptr[2])(int,int)={add,sub};
    printf("Enter choice\n 1.addition\t 2.Subraction\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
                fptr[1](x,y);
                break;
        case 2:
                fptr[2](x,y);
                break;
        default:
                printf("Entered wrong choice\n");
                break;
    }
    return 0;
    
}