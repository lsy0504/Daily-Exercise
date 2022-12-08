#include <stdio.h>

#define N 100 
void print2D(int a[][N], int row, int col);
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[N][N];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
            //printf("%d",a[i][j]);
        }
    }
    print2D(a,row,col);
    return 0;
}

void print2D(int a[][N], int row, int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return;
}
