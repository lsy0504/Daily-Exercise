#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    int n;
    while(cin>>str,str!=".")
    {
        //���str�ĳ���
        int len = str.size();
        for(int i=len;i>=0;i--)
        {
            //ֻ�ж�Լ��
            if(len%i==0) //i��len��һ��Լ��
            {
                //�����Լ���£����ÿ���Ӵ��ĳ���
                int m=len/i;
                //ȡ�����һ���Ӵ�
                string sub = str.substr(0,m);
                //Ȼ���ظ�i��
                string subm;
                for(int j=0;j<i;j++)
                {
                    subm+=sub;
                }
                //���ظ�m�ε��ַ�����ԭ�ַ������
                if(subm==str)
                {
                    //�õ������ֵ����⣺��Ϊi�ǴӴ�Сȡֵ������ȡ���ĵ�һ������Ҫ����ֵһ�������ģ�
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
