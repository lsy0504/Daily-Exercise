#include <cstdio>
using namespace std;
void swap(int &x,int &y)
{
    int t=x;
    x=y;
    y=t;
    printf("%d %d",x,y);
    return;
}

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    swap(x,y);
    return 0;
}
