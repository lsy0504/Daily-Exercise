#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1[100];
    //¼ÆÊý
    int n=0;
    while(cin>>s1[n]) n++;
    for(int i=n-1;i>=0;i--)
    {
        cout<<s1[i]<<' ';
    }
    return 0;
}
