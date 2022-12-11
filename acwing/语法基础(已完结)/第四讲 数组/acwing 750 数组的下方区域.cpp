#include <cstdio>
using namespace std;
int main()
{
    int i,j;
    double sum=0.0,avg=0.0;
    double N[12][12];
    char a;
    scanf("%c",&a);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&N[i][j]);
            //printf("%lf",N[i][j]);
        }
    }

    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            if(i+j>11&&j<i) sum+=N[i][j];
            //printf("%.1lf",sum);
        }
    }
    //printf("%d",sum);
    avg=sum/30.0;
    if(a=='S') printf("%.1lf",sum);
    else printf("%.1lf",avg);
    return 0;
}
