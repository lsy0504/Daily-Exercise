#include <cstdio>
using namespace std;
int main()
{
    float a,b,c,x;
    scanf("%f%f%f",&a,&b,&c);
    if(b>a)
    {
        x=b;
        b=a;
        a=x;
    }
    if(c>a){
        x=c;
        c=a;
        a=x;
    }
    if(a>=b+c)
    {
	printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if(a*a==b*b+c*c)
        {
            printf("TRIANGULO RETANGULO\n");
        }
        if(a*a>b*b+c*c)
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if(a*a<b*b+c*c)
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(a==b&&a==c)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        if((a==b&&a!=c)||(b==c&&b!=a)||(a==c&&c!=b))
        {
            printf("TRIANGULO ISOSCELES");
        }
    }
    return 0;
}