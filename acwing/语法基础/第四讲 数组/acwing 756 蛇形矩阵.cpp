#include <cstdio>
using namespace std;
int main()
{
    int i,j,k=1;
    int m,n;
    //ָ���ƶ����ĸ�����
    int up=0,down=0,left=0,right=1;
    scanf("%d%d",&n,&m);
    int N[n][m];
    //ȷ��������ķ��߽�
    int indexu=0,indexd=n-1,columnl=0,columnr=m-1;
    while(indexu<=indexd && columnl<=columnr)
    {
        if(right==1)
        {
            for(j=columnl;j<=columnr && indexu<=indexd;j++)
            {
                N[indexu][j]=k++;
            }
            //����ָ���߽�
            //if(indexu!=indexd) 
            indexu++;
            //���ֵ��������ָ������
            right=0;
            down=1;
        }
        if(down==1)
        {
            for(i=indexu;i<=indexd && columnl<=columnr;i++)
            {
                N[i][columnr]=k++;
            }
            //����ָ���߽�
            //if(columnl!=columnr) 
            columnr--;
            //���ֵ��������ȷ������
            down=0;
            left=1;
        }
        if(left==1)
        {
            for(j=columnr;j>=columnl && indexu<=indexd;j--)
            {
                N[indexd][j]=k++;
            }
            //����ָ���߽�
            //if(indexd!=indexu) 
            indexd--;
            //���ֵ��������ȷ������
            left=0;
            up=1;
        }
        if(up==1)
        {
            for(i=indexd;i>=indexu && columnl<=columnr;i--)
            {
                N[i][columnl]=k++;
            }
            //����ָ���߽�
            //if(columnl!=columnr) 
            columnl++;
            //���ֵ��������ȷ������
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
