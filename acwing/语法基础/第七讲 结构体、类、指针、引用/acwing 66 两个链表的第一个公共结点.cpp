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
    ListNode *findFirstCommonNode(ListNode *headA, ListNode *headB) {
        //���������б��ָ�룬�ֱ�ָ��ͷ���
        ListNode* p = headA;
        ListNode* q = headB;
        //��p��qû������ʱ����һֱ����
        while(p!=q)
        {
            //��Ϊ����һֱ������
            if(p!=NULL) p=p->next;
            //��Ϊ�����������һ�������ϼ�������
            else p=headB;
            //q���߷�ͬp
            if(q!=NULL) q=q->next;
            else q=headA;
        }
        //����������Ľ����Ϊ��һ����������㣬���ؼ���
        return p;
    }
};
