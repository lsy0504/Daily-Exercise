class Solution {
public:
    int NumberOf1(int n) {
        int res = 0;
        for(int i=0;i<32;i++)
        {
        	//λ���㣬ͳ��1�ĸ��� 
            if(n>>i&1)
            {
                res++;
            }
        }
        return res;
    }
};
