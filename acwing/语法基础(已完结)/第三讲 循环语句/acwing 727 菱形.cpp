#include <cstdio>
using namespace std;
int main()
{
    int n=0;
    int i,j,k;
    scanf("%d",&n);
    //������
    for(i=1;i<=int(n/2);i++)
    {
        //��ӡ�ո�
        for(j=0;j<int(n/2)-i+1;j++)
        {
            printf(" ");
        }
        //��ӡ�Ǻ�
        for(k=0;k<2*i-1;k++)
        {
            printf("*");
        }
        //��ӡ����
        printf("\n");
    }
    //�м�
    for(j=1;j<=n;j++)
    {
        printf("*");
    }
    printf("\n");
    //������
    for(i=1;i<=int(n/2);i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        for(k=0;k<(n-2*i);k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
