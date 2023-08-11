/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
        if (!head or !head->next){
            return head;
        }
        ListNode *curr = head;
        ListNode *next = head->next;
        while (next and next->next){
            swap(curr->val, next->val);
            curr = curr->next->next, next = next->next->next;
        }
        if (curr and next){
            swap(curr->val, next->val);
        } 
        return head;
    }
};