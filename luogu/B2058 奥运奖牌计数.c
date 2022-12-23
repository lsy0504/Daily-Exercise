#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,c,sum;
    int Au=0,Ag=0,Cu=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        Au+=a;
        Ag+=b;
        Cu+=c;
        sum+=a;
        sum+=b;
        sum+=c;
    }
    printf("%d %d %d %d",Au,Ag,Cu,sum);
    return 0;
}
