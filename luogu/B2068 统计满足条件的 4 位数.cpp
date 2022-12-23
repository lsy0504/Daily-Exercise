#include <iostream>
using namespace std;
int main()
{
    int n,num,cnt=0;
    cin>>n;
    while(n--)
    {
        cin>>num;
        //个位-千位-百位-十位
        if(((num%10)-(num/1000)-((num/100)%10)-((num%100)/10))>0)
        {
            cnt++;
        }
    }
    cout<< cnt <<endl;
    return 0;
}
