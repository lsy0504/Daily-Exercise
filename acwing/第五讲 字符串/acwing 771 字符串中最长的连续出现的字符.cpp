//�����������ͷ�ۡ�����
//�����ܶ�ط����вο���ֵ��ֵ�÷�����ĥ
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    string str;
    int i,j,k,n;
    int max=0,num;
    char maxc;
    //int sum;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>str;
        //����˫ָ�뷽ʽ
        max = 0;
        maxc='\n';
        for(j=0;j<str.size();j++)
        {
            //k����ָ��j��λ��
            k=j;
            while(k<str.size()&&str[j]==str[k])
            {
                //��ȡ�����ַ�����ֱ������߽�����ַ������ʱֹͣ
                k++;
            }
            //��ȡ����������ַ����ĳ��ȣ�����֮ǰ��max��������滻
            num=k-j;
            if(num>max)
            {
                max=num;
                maxc=str[j];
                //printf("%c",str[j]);
            }
            //����j��λ��(��ǰk��λ�õ�ǰһλ����Ϊ������j����++)����ȡ��һ�������ַ���
            j=k-1;
        }
        printf("%c %d\n",maxc,max);
    }
    return 0;
}
