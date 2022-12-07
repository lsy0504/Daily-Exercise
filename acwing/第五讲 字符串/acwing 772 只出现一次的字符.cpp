#include <cstdio>
#include<string.h>
#define N 100000
using namespace std;


int main()
{
    int i;
    int c[1000];
    char a[N];
    for(i=1;i<1000;i++)
    {
        c[i]=0;
    }
    scanf("%s",&a);
    // printf("%d",strlen(a));
    for(i=0;i<strlen(a);i++)
    {
        c[int(a[i])]++;
    }
    for(i=0;i<strlen(a);i++)
    {
        // printf("%c",a[i]);
        if(c[int(a[i])]==1)
        {
            printf("%c",a[i]);
            break;
        }
        if(i==strlen(a)-1) printf("no");

    }
    return 0;
}
