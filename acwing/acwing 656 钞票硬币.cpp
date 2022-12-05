#include <cstdio>
using namespace std;
int main(){
    int money1;
    int money2;
    double money;
    scanf("%lf",&money);
    money1 = money/1.0;
    money2 = (money-money1)*100.01; //这里貌似是受精度问题影响？不知道
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",int(money1/100));
    money1=money1%100;
    printf("%d nota(s) de R$ 50.00\n",int(money1/50));
    money1=money1%50;
    printf("%d nota(s) de R$ 20.00\n",int(money1/20));
    money1=money1%20;
    printf("%d nota(s) de R$ 10.00\n",int(money1/10));
    money1=money1%10;
    printf("%d nota(s) de R$ 5.00\n",int(money1/5));
    money1=money1%5;
    printf("%d nota(s) de R$ 2.00\n",int(money1/2));
    money1=money1%2;

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n",int(money1));

    printf("%d moeda(s) de R$ 0.50\n",int(money2/50));
    money2=money2%50;
    printf("%d moeda(s) de R$ 0.25\n",int(money2/25));
    money2=money2%25;
    printf("%d moeda(s) de R$ 0.10\n",int(money2/10));
    money2=money2%10;
    printf("%d moeda(s) de R$ 0.05\n",int(money2/5));
    money2=money2%5;
    printf("%d moeda(s) de R$ 0.01",money2);
    return 0;
}