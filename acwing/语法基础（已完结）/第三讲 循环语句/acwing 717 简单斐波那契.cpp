#include <cstdio>
using namespace std;
int main()
{
    long int f[50];
    int i,n,j;
    f[0]=0;
    f[1]=1;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        f[i+1]=f[i-1]+f[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%ld ",f[i]);
    }
    return 0;
}
