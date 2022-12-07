//这道题做得我头疼。。。
//不过很多地方很有参考价值，值得反复琢磨
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
        //采用双指针方式
        max = 0;
        maxc='\n';
        for(j=0;j<str.size();j++)
        {
            //k用来指定j的位置
            k=j;
            while(k<str.size()&&str[j]==str[k])
            {
                //读取连续字符串，直到到达边界或者字符不相等时停止
                k++;
            }
            //获取到这个连续字符串的长度，若比之前的max大，则进行替换
            num=k-j;
            if(num>max)
            {
                max=num;
                maxc=str[j];
                //printf("%c",str[j]);
            }
            //更换j的位置(当前k的位置的前一位，因为结束后j还会++)，读取下一个连续字符串
            j=k-1;
        }
        printf("%c %d\n",maxc,max);
    }
    return 0;
}
