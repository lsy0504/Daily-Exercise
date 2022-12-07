#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    char a[100],b[100];
    int i,num=0;
    float n,k;
    scanf("%f",&n);
    scanf("%s",&a);
    scanf("%s",&b);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==b[i])
        {
            num++;
        }
    }
    k=(float)num/strlen(a);
    if(k>=n)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
