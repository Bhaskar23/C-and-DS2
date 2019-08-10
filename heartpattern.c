#include<stdio.h>
int main()
{
    int row,col;
    for(int row=1;row<=6;row++)
    {
        for(int col=1;col<=7;col++)
        {
            if((row==1&&col%3!=1)||(row==2&&col%3==1)||(row-col==2)||((col+row)==10))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
}