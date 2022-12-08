#include <cstdio>
void sort(int a[], int l, int r)
{
    int t;
    while(l!=r)
    {
        for(int i=l;i<r;i++)
        {
            if(a[i+1]<a[i])
            {
                t=a[i+1];
                a[i+1]=a[i];
                a[i]=t;
                //printf("%d*%d\n\n\n",a[i],a[i+1]);
            }
        }
        r--;
    }
}
int main()
{
    int n,l,r;
    scanf("%d%d%d",&n,&l,&r);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,l,r);
    for(int j=0;j<n;j++)
    {
        printf("%d ",a[j]);
    }
    return 0;
}
