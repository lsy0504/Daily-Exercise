#include <cstdio>
#include <cmath>
int main()
{
    int a,b;
    long long int sum=1;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=b;i++)
    {
        sum*=a;
        sum%=7;
    }
    switch(sum)
    {
        case 0:
        printf("Sunday");
        break;
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
    }
    return 0;
}
