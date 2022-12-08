#include <cstdio>
using namespace std;
int main(){
    int year,month,day;
    int x;
    scanf("%d",&x);
    year = x/365;
    x = x%365;
    month = x/30;
    x = x%30;
    day = x;
    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)",day);
    return 0;
}