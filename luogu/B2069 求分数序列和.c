#include <stdio.h>
int main()
{
    int p[40],q[40];
    p[1]=1;
    q[1]=2;
    int n;
    double sum=0.0;
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        q[i]=p[i-1]+q[i-1];
        p[i]=q[i-1];
    }
    for(int j=1;j<=n;j++)
    {
        sum+=(1.0*q[j]/p[j]);
    }
    printf("%.4lf",sum);
    return 0;
}
