#include <stdio.h>
int main()
{
    int x,n;
    float sum=0.0000;
    scanf("%d%d",&x,&n);
    sum=x;
    for(int i=0;i<n;i++)
    {
        sum+=(sum*0.001);
    }
    printf("%.4lf",sum);
    return 0;
}
