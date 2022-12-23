#include <cstdio>
using namespace std;
int main()
{
    int px,py;
    scanf("%d%d",&px,&py);
    if((px>=-1&&px<=1)&&(py>=-1&&py<=1))
    {
        printf("yes");
    }else
    {
        printf("no");
    }
    return 0;
}
