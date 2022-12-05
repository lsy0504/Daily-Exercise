#include <cstdio>
#include <math.h>
using namespace std;
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a==0)
    {
        printf("Impossivel calcular");
        return 0;
    }
    float x1 = (-b+sqrt(b*b-(4*a*c)))/(2*a);
    float x2 = (-b-sqrt(b*b-(4*a*c)))/(2*a);
    if(b*b-(4*a*c)<0.0)
    {
        printf("Impossivel calcular");
        return 0;
    }
    if(x1==x2) printf("R1 = %.5f",x1);
    if(b*b-(4*a*c)>0.0) printf("R1 = %.5f\nR2 = %.5f",x1,x2);
    return 0;
}