#include <stdio.h>
int main()
{
    int n;
    int a,b;
    scanf("%d",&n);
    scanf("%d%d",&a,&b);
    double avg=1.0*b/a;
    for(int i=1;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        double avgn=1.0*b/a;
        if(avgn-avg>0.05)
        {
            printf("better\n");
            
        }else if(avg-avgn>0.05)
        {
            printf("worse\n");
        }else
        {
            printf("same\n");
        }
    }
    return 0;
}
