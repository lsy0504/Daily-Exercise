#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    string s, s1, s2;
    char c;
    //�Զ�����Ϊ�ָ�����ȡ�ַ���
    while (cin >> c, c != ',') s += c;
    while (cin >> c, c != ',') s1 += c;
    while (cin >> c) s2 += c;
    if(s.size()<s1.size()||s.size()<s2.size()) puts("-1");
    else{
        //�������s1��λ��
        int left=0;
        //������Χ
        while(left+s1.size()<=s.size())
        {
            //�ж��Ƿ�ƥ��
            int j=0;
            while(j<s1.size())
            {
                //����ַ��Աȣ���ƥ����break��������һ�����
                if(s[left+j]!=s1[j]) break;
                j++;
            }
            //�ҵ�����ߵ�s1��break����
            if(j==s1.size()) break;
            left++;
        }
        //�����ұ�s2��λ��
        int right=s.size()-s2.size();
        while(right>=0)
        {
            //�ж��Ƿ�ƥ��
            int k=0;
            while(k<s2.size())
            {
                //ͬ��
                if(s[right+k]!=s2[k]) break;
                k++;
            }
            //�ҵ����ұߵ�s2��break����
            if(k==s2.size()) break;
            right--;
        }

        //�ж�s1�Ƿ���s2���
        //leftΪs1��㣬rightΪs2��㣬����㷨���£�
        if(left+s1.size()-1<=right)
        {
            //������
            printf("%d",right-(left+s1.size()));
        }else
        {
            puts("-1");
        }
    }
    return 0;
}
