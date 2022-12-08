/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    node->val = node->next->val;  //值移位
    node->next = node->next->next;  //指针移位
}
