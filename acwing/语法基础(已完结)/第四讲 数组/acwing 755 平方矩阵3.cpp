#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int i,j,n=1;
    while(scanf("%d",&n)&&n)
    {
        int N[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                //printf("*");
                N[i][j]=pow(2,(i+j));
                //printf("%d ",N[i][j]);
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
