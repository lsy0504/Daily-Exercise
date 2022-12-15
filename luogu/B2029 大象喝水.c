#include <stdio.h>
#define pi 3.14159
int main()
{
    int r,h;
    int a;
    double v;
    scanf("%d%d",&h,&r);
    v=h*pi*r*r;
    a=(20000/v)+1;
    printf("%d",a);
    return 0;
}
