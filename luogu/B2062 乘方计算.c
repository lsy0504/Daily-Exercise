#include <stdio.h>
#include <math.h>
int main()
{
    long int a,n;
    scanf("%ld%ld",&a,&n);
    long int num=a;
    for(int i=1;i<n;i++)
    {
        num*=a;
    }
    printf("%ld",num);
    return 0;
}
