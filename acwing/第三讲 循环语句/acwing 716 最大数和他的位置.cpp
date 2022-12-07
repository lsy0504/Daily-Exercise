#include <cstdio>
using namespace std;
int main()
{
    int i,num,loc[200],max=0;
    for(i=1;i<=100;i++)
    {
        scanf("%d",&num);
        if(num>=max)
        {
            max = num;
        }
        loc[i]=num;
    }
    for(i=1;i<=100;i++)
    {
        if(loc[i]==max)
        {
            printf("%d\n%d",max,i);
            break;
        }
    }
    return 0;
}