//字符串的题都好折磨人，又是一个烧脑的东西
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
        //str1循环移位一次
        //substr(p)，从某个位置开始截取
        str1 = str1.substr(1)+str1[0];
        //用str2字符串枚举
        //枚举的范围为：j+str2.size()不超过str1.size()
        for(int j=0;j+str2.size()<=str1.size();j++)
        {
            //开始遍历str2，判断str2是否是str1的字串
            int k;
            for(k=0;k<str2.size();k++)
            {
                //若对应位置的字符不相同
                if(str2[k]!=str1[j+k])
                {
                    //说明不是字串，跳出循环，切换下一个起点
                    break;
                }
            }
            //循环结束后，若k的值与str2.size()相同，则说明str2是str1的子串
            //匹配成功的条件
            if(k==str2.size())
            {
                puts("true");
                return 0;
            }
        }
    }
    //若找不到字串
    puts("false");
    return 0;
}
