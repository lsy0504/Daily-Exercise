class Solution {
public:
    void reOrderArray(vector<int> &array) {
        //��������ָ�룬�ֱ�ָ��ͷβ
        int i=0;
        int j=array.size();
        //������ָ�벻����ʱ
        while(i<j)
        {
            //i����ɨ����������ֵΪ����ʱ����ƶ�
            while(i<j&&array[i]%2) i++;
            //j����ɨ��ż������ֵΪż��ʱ��ǰ�ƶ�
            while(i<j&&array[j]%2==0) j--;
            //���iָ��ż����jָ������ʱ�����޷��ƶ�����ʱ����ֵ����
            swap(array[i],array[j]);
        }
    }
};
