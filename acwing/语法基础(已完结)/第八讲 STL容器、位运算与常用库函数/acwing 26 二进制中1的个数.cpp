class Solution {
public:
    int NumberOf1(int n) {
        int res = 0;
        for(int i=0;i<32;i++)
        {
        	//位运算，统计1的个数 
            if(n>>i&1)
            {
                res++;
            }
        }
        return res;
    }
};
