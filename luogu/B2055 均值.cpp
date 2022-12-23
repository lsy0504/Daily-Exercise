#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    double sum=0.0;
    double num;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        cin>>num;
        sum+=num;
    }
    printf("%.4lf",sum/n);
    return 0;
}
