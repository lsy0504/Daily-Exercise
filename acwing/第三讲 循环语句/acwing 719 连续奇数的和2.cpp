#include <cstdio>
using namespace std;
int main()
{
    int n,i,j;
    int a,b;
    int sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=0;
        scanf("%d%d",&a,&b);
        //printf("%d %d\n",a,b);
        if(a<b)
        {
            for(j=a;j<b;j++)
            {
                if((j%2==1||j%2==-1)&&j!=a)
                {
                    sum+=j;
                    //printf("1");
                }
            }
        }else if(a>b)
        {
            for(j=b;j<a;j++)
            {
                if((j%2==1||j%2==-1)&&j!=b)
                {
                    sum+=j;
                    //printf("2");
                }
            }
        }else if(a==b)
        {
            sum=0;
        }
        printf("%d\n",sum);
    }
    return 0;
}
