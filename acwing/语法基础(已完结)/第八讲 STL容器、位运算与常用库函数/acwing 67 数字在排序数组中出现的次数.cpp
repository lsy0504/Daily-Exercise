class Solution {
public:
    int getNumberOfK(vector<int>& nums , int k) {
        int num=0;
        //��ʼ������nums.begin()����ֹ������nums.end()����������
        for(vector<int>::iterator it=nums.begin();it!=nums.end();it++)
        {
            //*itΪ�����ò�����ȡ��vector�е�ֵ
            if(*it==k)
            {
                num++;
            }
        }
        return num;
    }
};
