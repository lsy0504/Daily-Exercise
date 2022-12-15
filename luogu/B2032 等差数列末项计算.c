#include <stdio.h>
int main()
{
    int a,b,n;
    int i;
    scanf("%d%d%d",&a,&b,&n);
    int N[n];
    N[0]=a,N[1]=b;
    for(i=2;i<n;i++)
    {
        N[i]=N[i-1]+(b-a);
    }
    printf("%d",N[n-1]);
    return 0;
}
