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
        //遍历链表
        for(ListNode* p=head;p!=NULL;p=p->next)
        {
            //取出链表指向的值，放到容器中
            v.push_back(p->val);
        }
        //从尾到头反转容器
        reverse(v.begin(),v.end());
        return v;
    }
};
