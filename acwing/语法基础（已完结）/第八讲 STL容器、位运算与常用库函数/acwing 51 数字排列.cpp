class Solution {
public:
    vector<vector<int>> permutation(vector<int>& nums) {
        //�ȶԴ����vector�������򣬷����������
        sort(nums.begin(),nums.end());
        //����һ����άvector��ÿ�����һ�����з�ʽ������Ϊvector��
        vector<vector<int>> res;
        //�Ƚ��������vector
        res.push_back(nums);
        while(next_permutation(nums.begin(),nums.end()))
        {
            res.push_back(nums);
        }
        return res;
    }
};
