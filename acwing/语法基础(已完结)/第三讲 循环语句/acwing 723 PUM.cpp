#include <cstdio>
using namespace std;
int main()
{
    int m,n,i,j,k=1;
    char h[5] ="PUM";
    scanf("%d%d",&m,&n);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(k%n==0)
            {
                printf("PUM");
                k++;
            }else
            {
                printf("%d ",k);
                k++;
            }
        }
        printf("\n");
    }
}