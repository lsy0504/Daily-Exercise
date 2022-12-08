#include <cstdio>
using namespace std;
int main()
{
    int i,x;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        if(0==x%i)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}