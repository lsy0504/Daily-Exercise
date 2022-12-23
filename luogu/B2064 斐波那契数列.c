#include <stdio.h>
int main()
{
    int a[32];
    a[0]=0;
    a[1]=1;
    for(int i=2;i<32;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    int n,b;
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {
        scanf("%d",&b);
        printf("%d\n",a[b]);
    }
    return 0;
}
