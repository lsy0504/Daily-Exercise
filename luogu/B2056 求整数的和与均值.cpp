#include <cstdio>
using namespace std;
int main()
{
    int n,i;
    int num;
    long int sum=0;
    double avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        num=0;
        scanf("%d",&num);
        sum+=num;
    }
    avg=sum*1.0/n;
    printf("%ld %.5lf",sum,avg);
    return 0;
}
