#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    string a,b,s,t,ans;
    getline(cin,s);
    cin>>a>>b;
    int len=s.size();
    for(int i=0;i<len;i++)
    {
        //用空格分隔，读取每一个单词
        while(s[i]!=' '&&i<len)
        {
            t+=s[i];
            i++;
        }
        //若读取到待替换的字符串
        if(t==a)
        {
            //将其替换
            t=b;
        }
        //提取答案
        ans+=t+' ';
        t="";
    }
    cout<<ans;
    return 0;
}
