#include <cstdio>
using namespace std;
int main()
{
    int m,n;
    int i;
    long int N[60];
    N[0]=0,N[1]=1;
    for(i=2;i<60;i++)
    {
        N[i]=N[i-1]+N[i-2];
    }
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        printf("Fib(%d) = %ld\n",m,N[m]);
    }
    return 0;
}
