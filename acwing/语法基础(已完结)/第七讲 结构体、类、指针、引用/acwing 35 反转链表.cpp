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
        //首先确保链表不为空，若链表为空则直接返回
        if(head==NULL) return head;        
        
        //创建两个链表指针，其中一个指向头结点，一个指向头结点的下一个结点
        ListNode* p = head;
        ListNode* q = head->next;

        while(q!=NULL)
        {
            //找到q的下一个结点，命名为o
            ListNode* o = q->next;
            //改变q的指向，使其指向p，即完成反转
            q->next=p;
            //接下来是指针都向后移一位
            p=q,q=o;
        }
        //此时将头结点指向空
        head->next=NULL;
        return p;
    }
};
