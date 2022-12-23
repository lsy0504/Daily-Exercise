#include <stdio.h>
int main()
{
    long int i;
    scanf("%ld",&i);
    if(i%3==0&&i%5==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
