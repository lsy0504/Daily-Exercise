#include <stdio.h>
int main()
{
    long int a,b;
    scanf("%ld%ld",&a,&b);
    if(a-b>0)
    {
        printf(">");
    }
    else if(a-b<0)
    {
        printf("<");
    }
    else
    {
        printf("=");
    }
    return 0;
}
