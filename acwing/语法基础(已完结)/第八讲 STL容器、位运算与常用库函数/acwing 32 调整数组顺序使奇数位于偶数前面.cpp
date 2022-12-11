class Solution {
public:
    void reOrderArray(vector<int> &array) {
        //设置两个指针，分别指向头尾
        int i=0;
        int j=array.size();
        //在两个指针不相遇时
        while(i<j)
        {
            //i用于扫描奇数，当值为奇数时向后移动
            while(i<j&&array[i]%2) i++;
            //j用于扫描偶数，当值为偶数时向前移动
            while(i<j&&array[j]%2==0) j--;
            //如果i指向偶数，j指向奇数时，则无法移动，此时交换值即可
            swap(array[i],array[j]);
        }
    }
};
