//�ַ������ⶼ����ĥ�ˣ�����һ�����ԵĶ���
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    if(str1.size()<str2.size())
    {
        swap(str1,str2);
    }
    for(int i=0;i<str1.size();i++)
    {
        //str1ѭ����λһ��
        //substr(p)����ĳ��λ�ÿ�ʼ��ȡ
        str1 = str1.substr(1)+str1[0];
        //��str2�ַ���ö��
        //ö�ٵķ�ΧΪ��j+str2.size()������str1.size()
        for(int j=0;j+str2.size()<=str1.size();j++)
        {
            //��ʼ����str2���ж�str2�Ƿ���str1���ִ�
            int k;
            for(k=0;k<str2.size();k++)
            {
                //����Ӧλ�õ��ַ�����ͬ
                if(str2[k]!=str1[j+k])
                {
                    //˵�������ִ�������ѭ�����л���һ�����
                    break;
                }
            }
            //ѭ����������k��ֵ��str2.size()��ͬ����˵��str2��str1���Ӵ�
            //ƥ��ɹ�������
            if(k==str2.size())
            {
                puts("true");
                return 0;
            }
        }
    }
    //���Ҳ����ִ�
    puts("false");
    return 0;
}
