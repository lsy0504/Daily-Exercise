#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int i,j,n;
    double N[12][12];
    double sum=0.0,avg=0.0;
    char a;
    cin>>n>>a;

    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&N[i][j]);
        }
    }
    for(i=0;i<12;i++)
    {
        sum+=N[i][n];
        //printf("%.1lf\n",sum);
    }
    avg=sum/12.0;
    if(a=='S') printf("%.1lf",sum);
    else printf("%.1lf",avg);
    return 0;
}
