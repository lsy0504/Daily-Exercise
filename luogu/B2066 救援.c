#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    double x,y;
    int num;
    double minute;
    double dis;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lf %lf %d",&x,&y,&num);
        dis=sqrt(x*x+y*y);
        minute+=dis/50+num+dis/50+num*0.5;
    }
    printf("%d\n",(int)ceil(minute));
    return 0;
}
