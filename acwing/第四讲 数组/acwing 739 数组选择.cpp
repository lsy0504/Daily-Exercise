#include <cstdio>
using namespace std;
int main()
{
    int i;
    double x[100];
    for(i=0;i<100;i++)
    {
        scanf("%lf",&x[i]);
    }
    for(i=0;i<100;i++)
    {
        if(x[i]>10.0)
        {
            continue;
        }
        printf("A[%d] = %.1f\n",i,x[i]);
    }
    return 0;
}
