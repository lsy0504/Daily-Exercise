class Solution {
public:
    vector<vector<int>> permutation(vector<int>& nums) {
        //先对传入的vector进行排序，方便后续操作
        sort(nums.begin(),nums.end());
        //创建一个二维vector，每次添加一个排列方式，类型为vector。
        vector<vector<int>> res;
        //先将本身加入vector
        res.push_back(nums);
        while(next_permutation(nums.begin(),nums.end()))
        {
            res.push_back(nums);
        }
        return res;
    }
};
