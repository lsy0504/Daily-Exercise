#include <cstdio>
using namespace std;
int main()
{
    int i,j,n;
    char c;
    double sum=0.0,avg=0.0;
    double x[12][12];
    scanf("%c",&c);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&x[i][j]);
        }
    }

    for(i=0;i<5;i++)
    {
        for(j=i+1;i+j<11;j++)
        {
            sum+=x[i][j];
        }
        //printf("%lf\n",sum);
    }
    avg=sum/30.0;
    if(c=='S') printf("%.1lf",sum);
    else printf("%.1lf",avg);
    return 0;
}
