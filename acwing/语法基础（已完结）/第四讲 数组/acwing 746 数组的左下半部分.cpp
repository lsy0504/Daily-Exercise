#include <cstdio>
using namespace std;
int main()
{
    int i,j,n;
    double N[12][12];
    double sum=0.0,avg=0.0;
    char a;
    scanf("%c",&a);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&N[i][j]);
        }
    }
    for(i=1;i<12;i++)
    {
        for(j=0;j<i;j++)
        {
            sum+=N[i][j];
        }
    }
    avg=sum/66.0;
    if(a=='S') printf("%.1lf",sum);
    else printf("%.1lf",avg);
    return 0;
}
