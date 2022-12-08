#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    char a[300];
    int i;
    scanf("%[^\n]",&a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]!=' '&&a[i+1]==' ')
        {
            printf("%c",a[i]);
            continue;
        }
        if(a[i]==' '&&a[i+1]==' ')
        {
            continue;
        }
        printf("%c",a[i]);
    }
}
