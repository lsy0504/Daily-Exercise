class Solution {
public:
    int getMissingNumber(vector<int>& nums) {
        int m=0;
        for(vector<int>::iterator it=nums.begin();it!=nums.end();it++)
        {
            if(*it!=m)
            {
                m=*it-1;
                break;
            }
            m++;
        }
        return m;
    }
};
