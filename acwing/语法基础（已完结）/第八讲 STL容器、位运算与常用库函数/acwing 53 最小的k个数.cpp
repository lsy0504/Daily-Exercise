class Solution {
public:
    vector<int> getLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> v;
        sort(input.begin(),input.end());
        for(int i=0;i<k;i++)
        {
            v.push_back(input[i]);
        }
        return v;
    }
};
