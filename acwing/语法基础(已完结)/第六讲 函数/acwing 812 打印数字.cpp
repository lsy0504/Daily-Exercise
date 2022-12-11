#include <cstdio>
using namespace std;

void print(int a[], int size);
int main()
{
    int a[1100],size,n;
    scanf("%d %d",&n,&size);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    print(a,size);
    return 0;
}

void print(int a[], int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    return;
}
