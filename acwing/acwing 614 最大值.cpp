#include <cstdio>
#include <math.h>
using namespace std;
int main(){
    int a,b,c,d=0;
    scanf("%d%d%d",&a,&b,&c);
    d = (a+b+abs(a-b))/2;
    d = (c+d+abs(c-d))/2;
    printf("%d eh o maior",d);
    return 0;
}