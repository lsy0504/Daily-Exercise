#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int i,j,n;
    int x=0;
    int up,down,left,right;
    while(scanf("%d",&n)&&n)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                up = i;
                down = n-i+1;
                left = j;
                right = n-j+1;
                printf("%d ",min(min(up,down),min(left,right)));            

            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
