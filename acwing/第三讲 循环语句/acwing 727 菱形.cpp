#include <cstdio>
using namespace std;
int main()
{
    int n=0;
    int i,j,k;
    scanf("%d",&n);
    //上三角
    for(i=1;i<=int(n/2);i++)
    {
        //打印空格
        for(j=0;j<int(n/2)-i+1;j++)
        {
            printf(" ");
        }
        //打印星号
        for(k=0;k<2*i-1;k++)
        {
            printf("*");
        }
        //打印换行
        printf("\n");
    }
    //中间
    for(j=1;j<=n;j++)
    {
        printf("*");
    }
    printf("\n");
    //下三角
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
