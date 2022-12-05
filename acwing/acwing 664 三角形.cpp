#include <cstdio>
using namespace std;
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c&&b+c>a&&a+c>b)
    {
        printf("Perimetro = %.1f",a+b+c);
    }else{
        printf("Area = %.1f",(a+b)*c/2.0);
    }
    return 0;
}