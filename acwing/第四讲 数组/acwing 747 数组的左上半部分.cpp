#include <cstdio>
using namespace std;
#define dkx sb
int main()
{
    int i,j,n;
    double sum=0.0,avg=0.0;
    double x[12][12];
    char a;
    scanf("%c",&a);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&x[i][j]);

        }
    }

        for(i=0;i<11;i++)
        {
            for(j=0;j<11-i;j++)
            {
                sum+=x[i][j];
            }
        }
        if(a=='M')
    {
        printf("%.1lf",sum/66.0);
    }else{
        printf("%.1lf",sum);
    }
    return 0;
}
