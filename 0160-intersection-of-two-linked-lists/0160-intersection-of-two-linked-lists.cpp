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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* result = nullptr;
        for (ListNode* p = headA; p!=nullptr; p = p->next){
            for (ListNode* g = headB; g != nullptr; g = g->next){
                if (g == p){
                    result = g;
                    return result;
                }
            }
        }
        return result;
    }
};