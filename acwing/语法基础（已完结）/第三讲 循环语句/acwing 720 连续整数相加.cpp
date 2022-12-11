#include <cstdio>
using namespace std;
int main()
{
    int a,n,i,sum=0;
    scanf("%d",&a);
    while(scanf("%d",&n),n<=0);
    for(i=a;i<a+n;i++)
    {
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}