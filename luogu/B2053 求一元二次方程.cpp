#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;
int main()
{
    double a,b,c;
    double x1,x2;
    // cin>>a>>b>>c;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(b*b-(4*a*c)<0.00000)
    {
        printf("No answer!");
    }
    else
    {
        x1 = (-b+sqrt(b*b-(4*a*c)))/(2*a*1.0);
        x2 = (-b-sqrt(b*b-(4*a*c)))/(2*a*1.0);
        if(x2!=x1)
        {
            printf("x1=%.5lf;x2=%.5lf", min(x1, x2), max(x1, x2));
            
        }
        else if(x1==x2)
        {
            printf("x1=x2=%.5lf", x1);
        }
    }
    return 0;
}
