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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sz = 0;
        ListNode*p = head;
        if (head->next == nullptr){
            return nullptr;
        }
        while (p != nullptr){
            p = p->next;
            sz++;
        }
        if (sz == n){
            head = head->next;
            return head;
        }
        p = head;
        int k = sz-n-1;
        while (k!=0){
            p = p->next;
            k--;
        }
        p->next = p->next->next;
        return head;
    }
};