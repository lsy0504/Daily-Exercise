#include <cstdio>
using namespace std;
int main()
{
    int n,i;
    int num,inner=0,outer=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&num);
        if(num>=10&&num<=20)
        {
            inner++;
        }else
        {
            outer++;
        }
    }
    printf("%d in\n",inner);
    printf("%d out",outer);
    return 0;
}
