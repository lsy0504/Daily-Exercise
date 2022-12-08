#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    int n;
    while(cin>>str,str!=".")
    {
        //求出str的长度
        int len = str.size();
        for(int i=len;i>=0;i--)
        {
            //只判断约数
            if(len%i==0) //i是len的一个约数
            {
                //在这个约数下，求出每个子串的长度
                int m=len/i;
                //取出这第一段子串
                string sub = str.substr(0,m);
                //然后重复i次
                string subm;
                for(int j=0;j<i;j++)
                {
                    subm+=sub;
                }
                //若重复m次的字符串与原字符串相等
                if(subm==str)
                {
                    //得到最大幂值（理解：因为i是从大到小取值，所以取到的第一个满足要求幂值一定是最大的）
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
