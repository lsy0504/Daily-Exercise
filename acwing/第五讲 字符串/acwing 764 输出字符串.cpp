#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    char a[150],b[150];
    int i;
    scanf("%[^\n]",&a);
    for(i=0;i<strlen(a)-1;i++)
    {
        b[i]=a[i]+a[i+1];
    }
    b[strlen(a)-1]=a[0]+a[strlen(a)-1];
    for(i=0;i<strlen(a);i++)
    {
        printf("%c",b[i]);
    }
    return 0;
}
