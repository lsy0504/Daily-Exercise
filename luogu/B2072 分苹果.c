#include <stdio.h>
int main()
{
    int x;
    int min=0;
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        min+=i;
    }
    printf("%d",min);
    return 0;
    
}
