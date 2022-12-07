#include <cstdio>
using namespace std;
int main()
{
    int m,n,i,sum=0;
    while(scanf("%d%d",&m,&n)&&(m>0)&&(n>0))
    {
        sum = 0;
        for(i=(m<n?m:n);i<=(m>n?m:n);i++)
        {
            printf("%d ",i);
            sum+=i;
        }
        printf("Sum=%d\n",sum);
    }
    return 0;
}
