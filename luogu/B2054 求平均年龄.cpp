#include <cstdio>
using namespace std;
int main()
{
    int n;
    int age;
    double sum=0.0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&age);
        sum+=age;
    }
    printf("%.2lf",sum/n);
    return 0;
}
