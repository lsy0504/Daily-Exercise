#include <iostream>
#include <cstdio>
#define N 200
using namespace std;
void print(char str[])
{
    for(int i=0;i<N;i++)
    {
        printf("%c",str[i]);
    }
    return;
}

int main()
{
    char a[N];
    for(int i=0;i<N;i++)
    {
        scanf("%[^\n]",&a[i]);
    }
    print(a);
    return 0;
}
