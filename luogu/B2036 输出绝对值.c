#include <stdio.h>
int main()
{
    double a;
    scanf("%lf",&a);
    if(a>=0.0)
    {
        printf("%.2lf",a);
    }else{
        printf("%.2lf",-a);
    }
    return 0;
}
