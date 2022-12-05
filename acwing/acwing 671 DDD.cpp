#include <cstdio>
using namespace std;
int main()
{
    int x;
    scanf("%d",&x);
    switch(x){
        case 11:
        printf("Sao Paulo");
        break;
        case 19:
        printf("Campinas");
        break;
        case 21:
        printf("Rio de Janeiro");
        break;
        case 27:
        printf("Vitoria");
        break;
        case 31:
        printf("Belo Horizonte");
        break;
        case 32:
        printf("Juiz de Fora");
        break;
        case 61:
        printf("Brasilia");
        break;
        case 71:
        printf("Salvador");
        break;
        default:
        printf("DDD nao cadastrado");
    }
    return 0;
}