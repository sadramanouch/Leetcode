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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || head->next == nullptr || k == 0){
            return head;
        }
        long long count = 1;
        ListNode* p = head;
        while (p->next != nullptr){
            count++;
            p = p->next;
        }
        k = k % count;
        while (k != 0){
            p = head;
            while (p->next->next != nullptr){
                p = p->next;
            }
            ListNode* tmp = p->next;
            p->next = nullptr;
            tmp->next = head;
            head = tmp;
            k--;
        }
        return head;
    }
};