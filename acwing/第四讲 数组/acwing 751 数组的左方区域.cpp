#include <cstdio>
using namespace std;
int main()
{
    int i,j;
    double x[12][12];
    double sum=0.0,avg=0.0;
    char dkx;
    scanf("%c",&dkx);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&x[i][j]);
        }
    }
    for(i=1;i<11;i++)
    {
        for(j=0;j<i&&(i+j)<11;j++)
        {
            sum+=x[i][j];
        }
    }
    avg=sum/30.0;
    if(dkx=='S') printf("%.1lf",sum);
    else printf("%.1lf",avg);
    return 0;
}
