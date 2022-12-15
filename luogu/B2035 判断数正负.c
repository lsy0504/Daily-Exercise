#include <stdio.h>
int main()
{
    long int N;
    scanf("%ld",&N);
    if(N==0)
    {
        printf("zero");
    }
    else if(N>0)
    {
        printf("positive");
    }
    else
    {
        printf("negative");
    }
    return 0;
}
