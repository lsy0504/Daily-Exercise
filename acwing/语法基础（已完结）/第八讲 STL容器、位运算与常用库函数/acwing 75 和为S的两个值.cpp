class Solution {
public:
    vector<int> findNumbersWithSum(vector<int>& nums, int target) {
        vector<int>::iterator v1=nums.begin(),v2=nums.end();
        //存放可得到目标数的两个值
        vector<int> v;
        while(v1!=v2)
        {
            for(vector<int>::iterator it=nums.begin();it!=nums.end();it++)
            {
                if(*it+*v1==target)
                {
                    v.push_back(*v1);
                    v.push_back(*it);
                    return v;
                }
            }

            v1++;
        }
    }
};
