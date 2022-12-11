#include <cstdio>
using namespace std;
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        y=y+24;
        printf("O JOGO DUROU %d HORA(S)",y-x);
    }else if(x<y){
        printf("O JOGO DUROU %d HORA(S)",y-x);
    }else if(x==y){
        printf("O JOGO DUROU 24 HORA(S)");
    }
}