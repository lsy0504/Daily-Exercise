#include <cstdio>
using namespace std;
int main()
{
    int x,y,sum=0;
    scanf("%d%d",&x,&y);
    int i;
    if(x<y)
    {
     for(i=x+1;i<y;i++)
        {
            if(i%2==0) continue;
            sum+=i;
        }
        printf("%d",sum);
    }else if(x>y)
    {
        for(i=y+1;i<x;i++)
        {
            if(i%2==0) continue;
            sum+=i;
        }
        printf("%d",sum);
    }else if(x==y) printf("%d",sum);
    return 0;
}
