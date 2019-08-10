#include<stdio.h>
int main()
{
    int row,col;
    for(int row=0;row<8;row++)
    {
        for(int col=0;col<6;col++)
        {
            if(((row==0||row==7)&&col%5!=0))
            {
                printf("*");
            }
            else if((row==1||row==6)&&(col%5==0))
             {
                printf("*");
            }
            else if(row==2&&(col==0||col==3||col==5))
              {
                printf("*");
            }

            else if((row==3||row==4)&&(col==0||col==2||col==4||col==5))
              {
                printf("*");
            }
            else if(row==5&&(col==0||col==3||col==4||col==5))
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