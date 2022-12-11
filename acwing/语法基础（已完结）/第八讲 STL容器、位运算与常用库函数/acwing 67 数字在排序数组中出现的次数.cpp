class Solution {
public:
    int getNumberOfK(vector<int>& nums , int k) {
        int num=0;
        //起始迭代器nums.begin()和终止迭代器nums.end()，遍历即可
        for(vector<int>::iterator it=nums.begin();it!=nums.end();it++)
        {
            //*it为解引用操作，取出vector中的值
            if(*it==k)
            {
                num++;
            }
        }
        return num;
    }
};
