#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int i;
    char a[100],b[100];
    scanf("%[^\n]\n",&a);
    scanf("%[^\n]",&b);
    // printf("%s",a);
    // printf("%s",b);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        {
            a[i]+=32;
        }
    }
    for(i=0;i<strlen(b);i++)
    {
        if(b[i]>='A'&&b[i]<='Z')
        {
            b[i]+=32;
        }
    }
    if(strcmp(a,b)>0)
    {
        printf(">");
    }else if(strcmp(a,b)==0)
    {
        printf("=");
    }else
    {
        printf("<");
    }
    return 0;
}
