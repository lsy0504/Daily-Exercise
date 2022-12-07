#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char a[30];
    char m;
    int i;
    scanf("%s\n",&a);
    scanf("%c",&m);
    for(i=0;i<strlen(a);i++)
    {
        //printf("%c",m);
        if(a[i]==m)
        {
            a[i]='#';
        }
    }
    for(i=0;i<strlen(a);i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}
