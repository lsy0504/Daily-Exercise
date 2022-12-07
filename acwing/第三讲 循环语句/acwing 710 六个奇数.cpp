#include <cstdio>
using namespace std;
int main()
{
    int x,i;
    scanf("%d",&x);
    for(i=x;i<x+12;i+=2)
    {
        if(i%2==0) 
        {
            i++;
            printf("%d\n",i);
        }else if(i%2==1)
        {
            printf("%d\n",i);
        }
    }
}
