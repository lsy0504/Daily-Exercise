#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    char a[100];
    int n;
    //a = getchar();
    //指定输入结束的字符为回车
    scanf("%[^\n]",&a);
    n=strlen(a);
    for(int i=0;i<n;i++)
    {
        printf("%c ",a[i]);
    }
    return 0;
}
