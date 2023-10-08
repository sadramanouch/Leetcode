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
    ListNode* middleNode(ListNode* head) {
        int i = 1;
        ListNode* p = head;
        while (p->next != nullptr){
            p = p->next;
            i++;
        }
        double mid = ceil((i+1)/2.0);
        while(mid != 1){
            head = head->next;
            mid--;
        }
        return head;
    }
};