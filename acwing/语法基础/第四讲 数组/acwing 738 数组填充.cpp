#include <cstdio>
using namespace std;
int main()
{
    int i,x[10];
    int n;
    scanf("%d",&n);
    x[0]=n;
    printf("N[0] = %d\n",x[0]);
    for(i=1;i<10;i++)
    {
        x[i]=2*x[i-1];
        printf("N[%d] = %d\n",i,x[i]);
    }
    return 0;
}
