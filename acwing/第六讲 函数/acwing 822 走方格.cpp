#include <cstdio>
int ans=0;
int i,j;
void walk(int x,int y)
{
    if(i==x&&j==y)
    {
        ans++;
    }else
    {
        if(x<i) walk(x+1,y);
        if(y<j) walk(x,y+1);
    }
}

int main()
{
    int x,y;
    scanf("%d%d",&i,&j);
    walk(0,0);
    printf("%d",ans);
    return 0;
}
