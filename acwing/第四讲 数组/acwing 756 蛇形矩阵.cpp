#include <cstdio>
using namespace std;
int main()
{
    int i,j,k=1;
    int m,n;
    //指定移动的四个方向
    int up=0,down=0,left=0,right=1;
    scanf("%d%d",&n,&m);
    int N[n][m];
    //确定数组的四方边界
    int indexu=0,indexd=n-1,columnl=0,columnr=m-1;
    while(indexu<=indexd && columnl<=columnr)
    {
        if(right==1)
        {
            for(j=columnl;j<=columnr && indexu<=indexd;j++)
            {
                N[indexu][j]=k++;
            }
            //重新指定边界
            //if(indexu!=indexd) 
            indexu++;
            //清空值，并重新指定方向
            right=0;
            down=1;
        }
        if(down==1)
        {
            for(i=indexu;i<=indexd && columnl<=columnr;i++)
            {
                N[i][columnr]=k++;
            }
            //重新指定边界
            //if(columnl!=columnr) 
            columnr--;
            //清空值，并重新确定方向
            down=0;
            left=1;
        }
        if(left==1)
        {
            for(j=columnr;j>=columnl && indexu<=indexd;j--)
            {
                N[indexd][j]=k++;
            }
            //重新指定边界
            //if(indexd!=indexu) 
            indexd--;
            //清空值，并重新确定方向
            left=0;
            up=1;
        }
        if(up==1)
        {
            for(i=indexd;i>=indexu && columnl<=columnr;i--)
            {
                N[i][columnl]=k++;
            }
            //重新指定边界
            //if(columnl!=columnr) 
            columnl++;
            //清空值，并重新确定方向
            up=0;
            right=1;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",N[i][j]);
        }
        printf("\n");
    }
    return 0;
}
