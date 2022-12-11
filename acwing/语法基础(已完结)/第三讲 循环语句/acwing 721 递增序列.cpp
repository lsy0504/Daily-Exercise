#include <cstdio>
using namespace std;
int main()
{
    int i=0,j,n=1;
    while(n!=0)
    {
        scanf("%d",&n);
        if(n==0) return 0;
        for(i=0;i<n;i++)
        {
            printf("%d ",i+1);
        }
            printf("\n");
    }
    return 0;
}
