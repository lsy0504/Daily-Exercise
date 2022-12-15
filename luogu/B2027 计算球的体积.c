#include <stdio.h>
#define PI 3.14
int main()
{
    int r;
    double v;
    scanf("%d",&r);
    v=4.0*PI/3.0*r*r*r;
    printf("%.5lf",v);
    return 0;
}
