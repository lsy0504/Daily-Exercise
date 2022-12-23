#include <stdio.h>
int main()
{
    int n,num;
    int a=0,b=0,c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        if(num==1)
        {
            a++;
            continue;
        }
        else if(num==5)
        {
            b++;
            continue;
        }
        else if(num==10)
        {
            c++;
            continue;
        }
    }
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    return 0;
}
