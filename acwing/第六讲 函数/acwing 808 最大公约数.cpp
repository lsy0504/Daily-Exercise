#include <algorithm>
#include <cstdio>
using namespace std;
int gcd(int a,int b)
{
    for(int i=max(a,b);i>0;i--)
    {
        if(a%i==0&&b%i==0)
        {
            return i;
        }
    }
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",gcd(a,b));
    return 0;
}
