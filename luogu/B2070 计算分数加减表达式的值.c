#include <stdio.h>
int main()
{
    int n;
    int flag=1;
    double sum=0.0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=flag*1.0/i;
        flag=-flag;
    }
    printf("%.4lf",sum);
    return 0;
}
