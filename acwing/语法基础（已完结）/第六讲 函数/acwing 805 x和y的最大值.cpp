#include <algorithm>
#include <cstdio>
using namespace std;
int max(int x,int y)
{
    if(x>=y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",max(a,b));
    return 0;
}
