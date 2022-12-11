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
    ListNode* dummy = new ListNode(-1);  //新建一个节点
    ListNode* tail = dummy;  //设置一个tail指针，作为遍历这个节点的节点指针
    while(l1&&l2)
    {
        //选取值较小的节点
        if(l1->val<l2->val)
        {
            //将l1接到tail的后面
            tail->next = l1;
            //更新尾节点为tail->next
            tail = tail->next;
            //取到值后，l1向后挪一位
            l1 = l1->next;
        }else{
            //将l2接到tail的后面
            tail->next = l2;
            //更新尾节点为tail->next
            tail = tail->next;
            //取到值后，l2向后挪一位
            l2 = l2->next;
        }
        //最后至少剩下一个链表不为空，让尾节点指向不为空的那个值。
        if(l1) tail->next=l1;
        if(l2) tail->next=l2;
    }
    //返回dummy->next
    return dummy->next;
    }
};

