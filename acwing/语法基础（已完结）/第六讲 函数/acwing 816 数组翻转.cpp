#include <cstdio>
#define N 1050
void reverse(int a[], int size)
{
    int b[size];
    for(int i=0;i<size;i++)
    {
        b[i]=a[i];
    }
    for(int i=0,j=size-1;i<size;i++,j--)
    {
        a[i]=b[j];
    }
    return;
}
int main()
{
    int a[N];
    int size;
    int n;
    scanf("%d%d",&n,&size);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    reverse(a,size);
    for(int j=0;j<n;j++)
    {
        printf("%d ",a[j]);
    }
    return 0;
}
