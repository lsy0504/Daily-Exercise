#include <cstdio>
using namespace std;
int main()
{
    int i,num=0;
    float x;
    for(i=1;i<=6;i++)
    {
        x = 0;
        scanf("%f",&x);
        if(x>0)
        {
            num++;
        }
    }
    printf("%d positive numbers",num);
    return 0;
}
