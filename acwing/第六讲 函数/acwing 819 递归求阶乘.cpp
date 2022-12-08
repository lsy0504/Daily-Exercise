#include <cstdio>
int fact(int n)
{
    while(n>1)
    {
        return n*fact(n-1);
    }
    if(n==1) return n;
}
int main()
{
    long int n;
    scanf("%ld",&n);
    if(n==1) printf("1");
    else printf("%ld",fact(n));
    return 0;
}
