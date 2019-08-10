#include<stdio.h>
#define ROWS 10
#define COLS 10
void matrans(int mat[][COLS],int,int);
int main()
{
    int a[ROWS][COLS]={{1,2,3},{4,5,6},{9,6,4},{2,8,5}};
    matrans(a,4,3);
}
void matrans(int mat[][COLS],int row,int col)
{
    int i,j;
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d  ",mat[j][i]);
        }
        printf("\n");
    }
}