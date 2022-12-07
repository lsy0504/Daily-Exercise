#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    char a[150];
    scanf("%[^\n]",&a);
    for(int i=0;i<strlen(a);i++)
    {
        if((a[i]>='a'&&a[i]<'z')||(a[i]>='A'&&a[i]<'Z'))
        {
            a[i]++;
        }else if(a[i]=='z'||a[i]=='Z')
        {
            a[i]-=25;
        }
        printf("%c",a[i]);
    }
    return 0;
}
