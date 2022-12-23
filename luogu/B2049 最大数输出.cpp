#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            printf("%d",a);
        }
        else if(a<c)
        {
            printf("%d",c);
        }
    }else if(a<=b)
    {
        if(a<c)
        {
           if(b>c)
            {
                printf("%d",b);
            }
            else if(b<c)
            {
                printf("%d",c);
            }
        }
        else if(a>c)
        {
            printf("%d",b);
        }
    }
    return 0;
}
