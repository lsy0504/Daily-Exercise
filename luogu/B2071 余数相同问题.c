#include <stdio.h>
int main()
{
    long int a,b,c;
    //long int x;
    scanf("%ld%ld%ld",&a,&b,&c);
    for(long int i=2;i<=a&&i<=b&&i<=c;i++)
    {
        if(a%i==b%i&&b%i==c%i)
        {
            printf("%ld",i);
            break;
        }
    }
    return 0;
}
