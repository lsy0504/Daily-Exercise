#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int i,j,n;
    while(scanf("%d",&n)&&n)
    {
        int N[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j) N[i][j]=1;
                else N[i][j]=abs(i-j)+1;
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d ",N[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
