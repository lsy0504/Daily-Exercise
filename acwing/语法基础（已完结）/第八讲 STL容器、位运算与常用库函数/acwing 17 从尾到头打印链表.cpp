/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> printListReversingly(ListNode* head) {
        vector<int> v;
        //��������
        for(ListNode* p=head;p!=NULL;p=p->next)
        {
            //ȡ������ָ���ֵ���ŵ�������
            v.push_back(p->val);
        }
        //��β��ͷ��ת����
        reverse(v.begin(),v.end());
        return v;
    }
};
