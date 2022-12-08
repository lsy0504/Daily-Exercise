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
    ListNode* merge(ListNode* l1, ListNode* l2) {
    ListNode* dummy = new ListNode(-1);  //�½�һ���ڵ�
    ListNode* tail = dummy;  //����һ��tailָ�룬��Ϊ��������ڵ�Ľڵ�ָ��
    while(l1&&l2)
    {
        //ѡȡֵ��С�Ľڵ�
        if(l1->val<l2->val)
        {
            //��l1�ӵ�tail�ĺ���
            tail->next = l1;
            //����β�ڵ�Ϊtail->next
            tail = tail->next;
            //ȡ��ֵ��l1���Ųһλ
            l1 = l1->next;
        }else{
            //��l2�ӵ�tail�ĺ���
            tail->next = l2;
            //����β�ڵ�Ϊtail->next
            tail = tail->next;
            //ȡ��ֵ��l2���Ųһλ
            l2 = l2->next;
        }
        //�������ʣ��һ������Ϊ�գ���β�ڵ�ָ��Ϊ�յ��Ǹ�ֵ��
        if(l1) tail->next=l1;
        if(l2) tail->next=l2;
    }
    //����dummy->next
    return dummy->next;
    }
};

