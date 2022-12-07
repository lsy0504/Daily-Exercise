#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    string s, s1, s2;
    char c;
    //以逗号作为分隔，读取字符串
    while (cin >> c, c != ',') s += c;
    while (cin >> c, c != ',') s1 += c;
    while (cin >> c) s2 += c;
    if(s.size()<s1.size()||s.size()<s2.size()) puts("-1");
    else{
        //找最左边s1的位置
        int left=0;
        //搜索范围
        while(left+s1.size()<=s.size())
        {
            //判断是否匹配
            int j=0;
            while(j<s1.size())
            {
                //逐个字符对比，不匹配则break，换到下一个起点
                if(s[left+j]!=s1[j]) break;
                j++;
            }
            //找到最左边的s1，break返回
            if(j==s1.size()) break;
            left++;
        }
        //找最右边s2的位置
        int right=s.size()-s2.size();
        while(right>=0)
        {
            //判断是否匹配
            int k=0;
            while(k<s2.size())
            {
                //同上
                if(s[right+k]!=s2[k]) break;
                k++;
            }
            //找到最右边的s2，break返回
            if(k==s2.size()) break;
            right--;
        }

        //判断s1是否在s2左边
        //left为s1起点，right为s2起点，则计算法如下：
        if(left+s1.size()-1<=right)
        {
            //求出跨距
            printf("%d",right-(left+s1.size()));
        }else
        {
            puts("-1");
        }
    }
    return 0;
}
