#include <iostream>
using namespace std;
int main()
{
    int n,num,cnt=0;
    cin>>n;
    while(n--)
    {
        cin>>num;
        //��λ-ǧλ-��λ-ʮλ
        if(((num%10)-(num/1000)-((num/100)%10)-((num%100)/10))>0)
        {
            cnt++;
        }
    }
    cout<< cnt <<endl;
    return 0;
}
