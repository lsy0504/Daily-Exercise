#include <cstdio>
using namespace std;
int main()
{
    int i,j,n;
    double sum=0.0,avg=0.0;
    char m;
    double x[12][12];
    scanf("%d",&n);
    scanf("\n%c",&m);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&x[i][j]);
        }
    }
    if(m=='S')
    {
        //printf("###");
        for(i=0;i<12;i++)
        {
            if(i==n)
            {
                for(j=0;j<12;j++)
                {
                    sum+=x[i][j];
                }
            }
        }
        printf("%.1lf",sum);
    }else if(m=='M')
    {
        //printf("$$$");
        for(i=0;i<12;i++)
        {
            if(i==n)
            {
                for(j=0;j<12;j++)
                {
                    sum+=x[i][j];
                }
            }
        }
        avg=sum/12.0;
        printf("%.1lf",avg);
    }
    return 0;
}
