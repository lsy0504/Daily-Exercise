#include <iostream>
using namespace std;
const int N = 200;
int n;
//字符串数组，存储N个字符串
string str[N];
int main()
{
    while(cin>>n,n)
    {
        //设置一个变量，记录所有字符串的最小长度
        int min=300;
        //读入n个字符串
        for(int i=0;i<n;i++) 
        {
            cin>>str[i];
            if(min>str[i].size())
            {
                min=str[i].size();
            }
        }
        //枚举每个字符串的后缀
        //判断条件是当min大于0
        while(min)
        {
            //设置一个bool变量，判断公共后缀匹配是否成功
            bool success = true;
            for(int j=1;j<n;j++)
            {
                //设置一个bool变量，判断每个字符串与第一个字符串的后min个字符是否相同
                bool flag = true;
                //判断公共后缀的长度，最长为min
                for(int k=1;k<=min;k++)
                {
                    //如果有一个对应位置的字符不相等，则说明不是公共后缀
                    if(str[0][str[0].size()-k]!=str[j][str[j].size()-k])
                    {
                        flag=false;
                        break;
                    }
                }
                //匹配不成功则跳出本轮循环，开始下一次循环
                if(!flag)
                {
                    success=false;
                    break;
                }
            }
            //匹配成功则跳出循环
            if(success) break;
            min--;
        }
        //输出匹配的最长字串
        cout<<str[0].substr(str[0].size()-min)<<endl;
    }
    return 0;
}
