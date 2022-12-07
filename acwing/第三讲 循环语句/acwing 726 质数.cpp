#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int i,j,n,num;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&num);
        if(num==2)
        {
            printf("2 is prime\n");
            continue;
        }
        for(j=2;j<=int(sqrt(num))+1;j++)
        {
            if(num%j==0)
            {
                printf("%d is not prime\n",num);
                break;
            }
            if(j==int(sqrt(num))+1)
            {
                printf("%d is prime\n",num);
            }
        }
    }
    return 0;
}
