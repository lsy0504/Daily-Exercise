#include <cstdio>
using namespace std;
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b){
        if(a%b==0){
            printf("Sao Multiplos");
        }else if(a%b!=0){
            printf("Nao sao Multiplos");
        }
    }
    else if(a<b)
    {
        if(b%a==0){
            printf("Sao Multiplos");
        }else if(b%a!=0){
            printf("Nao sao Multiplos");
        }
    }
    if(a==b) printf("Sao Multiplos");
    return 0;
}