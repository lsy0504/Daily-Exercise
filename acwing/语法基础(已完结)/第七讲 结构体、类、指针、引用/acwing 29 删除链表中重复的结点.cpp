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
        //创建两个列表的指针，分别指向头结点
        ListNode* p = headA;
        ListNode* q = headB;
        //当p、q没有相遇时，则一直遍历
        while(p!=q)
        {
            //不为空则一直向后遍历
            if(p!=NULL) p=p->next;
            //若为空则更换到另一个链表上继续遍历
            else p=headB;
            //q的走法同p
            if(q!=NULL) q=q->next;
            else q=headA;
        }
        //最后相遇到的结点则为第一个公公共结点，返回即可
        return p;
    }
};
