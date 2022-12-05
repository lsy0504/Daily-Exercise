#include <cstdio>
using namespace std;
int main()
{
    float x,tax;
    scanf("%f",&x);
    if(int(x)>0&&int(x)<2000)
    {
        printf("Isento");
    }else if(x>=int(2000)&&int(x)<3000)
    {
        tax = (x-2000.00)*0.08;
        //x = x+tax;
        printf("R$ %.2f",tax);
    }else if(int(x)>=3000&&int(x)<4500)
    {
        tax = (x-3000.00)*0.18+1000.00*0.08;
        //x = x+tax;
        printf("R$ %.2f",tax);
    }else if(int(x)>4500)
    {
        tax = (x-4500.00)*0.28+1500.00*0.18+1000*0.08;
        //x = x+tax;
        printf("R$ %.2f",tax);
    }
    return 0;
}