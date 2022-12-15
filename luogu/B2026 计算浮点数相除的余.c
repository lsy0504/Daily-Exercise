//从后面开始都使用c/c++来做题了（python虽然功能强，但实在不适合用在做题上。。。） 
#include <stdio.h>
int main()
{
    double a,b;
    int k;
    scanf("%lf%lf",&a,&b);
    k=a/b;
    printf("%.5lf",a-k*b);
    return 0;
}
