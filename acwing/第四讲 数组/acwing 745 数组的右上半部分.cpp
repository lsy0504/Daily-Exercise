#include <cstdio>
using namespace std;
int main()
{
    int i,j,n;
    double sum=0.0,avg=1.0;
    char dkx;
    double x[12][12];
    scanf("%c",&dkx);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&x[i][j]);
        }
    }
    if(dkx=='M')
    {
        for(i=0;i<11;i++)
        {
            for(j=i+1;j<12;j++)
            {
                sum+=x[i][j];
            }
        }
        avg=sum/66;
        printf("%.1lf",avg);
    }
    else if(dkx=='S')
    {
        for(i=0;i<11;i++)
        {
            for(j=i+1;j<12;j++)
            {
                sum+=x[i][j];
            }
        }
        printf("%.1lf",sum);
    }
    return 0;
}
