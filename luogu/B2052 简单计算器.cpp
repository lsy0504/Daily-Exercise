#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    char o;
    cin>>a>>b>>o;
    if(o=='+')
    {
        printf("%d",a+b);
    }
    else if(o=='-')
    {
        printf("%d",a-b);
    }else if(o=='*')
    {
        printf("%d",a*b);
    }else if(o=='/')
    {
        if(b==0)
        {
            printf("Divided by zero!");
            return 0;
        }
        printf("%d",a/b);
    }
    else
    {
        printf("Invalid operator!");
    }
    return 0;
}
