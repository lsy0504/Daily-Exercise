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
        //�ÿո�ָ�����ȡÿһ������
        while(s[i]!=' '&&i<len)
        {
            t+=s[i];
            i++;
        }
        //����ȡ�����滻���ַ���
        if(t==a)
        {
            //�����滻
            t=b;
        }
        //��ȡ��
        ans+=t+' ';
        t="";
    }
    cout<<ans;
    return 0;
}
