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
    ListNode* reverseList(ListNode* head) {
        //����ȷ������Ϊ�գ�������Ϊ����ֱ�ӷ���
        if(head==NULL) return head;        
        
        //������������ָ�룬����һ��ָ��ͷ��㣬һ��ָ��ͷ������һ�����
        ListNode* p = head;
        ListNode* q = head->next;

        while(q!=NULL)
        {
            //�ҵ�q����һ����㣬����Ϊo
            ListNode* o = q->next;
            //�ı�q��ָ��ʹ��ָ��p������ɷ�ת
            q->next=p;
            //��������ָ�붼�����һλ
            p=q,q=o;
        }
        //��ʱ��ͷ���ָ���
        head->next=NULL;
        return p;
    }
};
