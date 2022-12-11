class Solution {
public:
    int strToInt(string str) {
        //指定一个循环变量
        int k=0;
        //略过行首空格：
        while(k<str.size()&&str[k]==' ')
        {
            k++;
        }
        //确定读入数字的符号
        bool neg = false;
        if(k<str.size())
        {
            //若为负数，则用neg进行标记
            if(str[k]=='-') neg=true,k++; 
            else if(str[k]=='+') k++;
        }
        long long res = 0;
        while(k<str.size()&&'0'<=str[k]&&str[k]<='9')
        {
            //将读取到的数字字符，从高位到低位转换为数值，用res接收。
            //str[k]-'0'即为该位数字，然后k++。
            res=res*10+(str[k++]-'0');
            if (res > 1e11) break;
        }
        //在这里将负数转换为正数
        if(neg) res=-1*res;
        //数字超出最大值
        if (res<INT_MIN) return INT_MIN;
        if (res>INT_MAX) return INT_MAX;

        return res;
    }
};