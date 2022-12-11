#include <cstdio>
#include <algorithm>
using namespace std;
int fact(int n){
    int num=1;
    while(n>0)
    {
        num*=n;
        //printf("%d",n);
        n--;
    }
    return num;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;
}
