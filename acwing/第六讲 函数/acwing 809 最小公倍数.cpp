#include <cstdio>
int lcm(int a, int b)
{
    int mul = a*b;
    for(int i=a;i<=mul;i++)
    {
        if(i%a==0&&i%b==0)
        {
            return i;
        }
    }
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",lcm(a,b));
    return 0;
}
