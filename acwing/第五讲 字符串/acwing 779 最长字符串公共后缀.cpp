#include <iostream>
using namespace std;
const int N = 200;
int n;
//�ַ������飬�洢N���ַ���
string str[N];
int main()
{
    while(cin>>n,n)
    {
        //����һ����������¼�����ַ�������С����
        int min=300;
        //����n���ַ���
        for(int i=0;i<n;i++) 
        {
            cin>>str[i];
            if(min>str[i].size())
            {
                min=str[i].size();
            }
        }
        //ö��ÿ���ַ����ĺ�׺
        //�ж������ǵ�min����0
        while(min)
        {
            //����һ��bool�������жϹ�����׺ƥ���Ƿ�ɹ�
            bool success = true;
            for(int j=1;j<n;j++)
            {
                //����һ��bool�������ж�ÿ���ַ������һ���ַ����ĺ�min���ַ��Ƿ���ͬ
                bool flag = true;
                //�жϹ�����׺�ĳ��ȣ��Ϊmin
                for(int k=1;k<=min;k++)
                {
                    //�����һ����Ӧλ�õ��ַ�����ȣ���˵�����ǹ�����׺
                    if(str[0][str[0].size()-k]!=str[j][str[j].size()-k])
                    {
                        flag=false;
                        break;
                    }
                }
                //ƥ�䲻�ɹ�����������ѭ������ʼ��һ��ѭ��
                if(!flag)
                {
                    success=false;
                    break;
                }
            }
            //ƥ��ɹ�������ѭ��
            if(success) break;
            min--;
        }
        //���ƥ�����ִ�
        cout<<str[0].substr(str[0].size()-min)<<endl;
    }
    return 0;
}
