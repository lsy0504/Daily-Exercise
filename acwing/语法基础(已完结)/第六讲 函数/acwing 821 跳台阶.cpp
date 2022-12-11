#include <cstdio>
int step(int n)
{
    if(n==1) return 1;
    if(n==2) return 2;
    if(n>2) return step(n-1)+step(n-2);
}
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",step(num));
    return 0;
}
