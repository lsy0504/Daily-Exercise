#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int i,n;
    int min,mp=1;
    scanf("%d",&n);
    int N[n];
    for(i=0;i<n;i++) cin>>N[i];
    min=N[0];
    for(i=1;i<n;i++)
    {
        if(N[i]<min)
        {
            min=N[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(N[i]==min)
        {
            mp=i;
            break;
        }
    }
    printf("Minimum value: %d\n",min);
    printf("Position: %d",mp);
    return 0;
}
