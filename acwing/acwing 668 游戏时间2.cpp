#include <cstdio>
using namespace std;
int main()
{
    int a,b,c,d,h,m;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a<c)
    {
        if(b<d)
        {
            h = c-a;
            m = d-b;
        }
        else if(b>d)
        {
            h = c-a-1;
            m = d+60-b;
        }
        else if(b==d)
        {
            h = c-a;
            m = 0;
        }
    }
    else if(a>c)
    {
        if(b<d)
        {
            h = c+24-a;
            m = d-b;
        }
        else if(b>d)
        {
            h = c+24-a-1;
            m = d+60-b;
        }
        else if(b==d)
        {
            h = c+24-a;
            m = 0;
        }
    }
    else if(a==c)
    {
        if(b<d)
        {
            h = 0;
            m = d-b;
        }
        else if(b>d)
        {
            h = 23;
            m = d+60-b;
        }
        else if(b==d)
        {
            h = 24;
            m = 0;
        }
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",h,m);
    return 0;
}