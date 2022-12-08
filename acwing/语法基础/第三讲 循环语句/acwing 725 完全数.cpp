#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int i,j,n,pe;
    long int num;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        pe = 0;
        scanf("%ld",&num);
        for(j=1;j<=sqrt(num);j++)
        {
            if(num%j==0)
            {
                pe+=j;
                pe+=num/j;
            }
        }
        pe/=2;
        if(num==1)
        {
            printf("1 is not perfect\n");
        }else if(pe!=num)
        {
            printf("%d is not perfect\n",num);
        }else 
        {
            printf("%d is perfect\n",num);
        }
    }
    return 0;
}
