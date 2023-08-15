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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr){
            return list2;
        }
        if (list2 == nullptr){
            return list1;
        }
        ListNode* head = new ListNode;
        ListNode* p = head;
        while (list1 != nullptr && list2 != nullptr){
            if (list1->val <= list2->val){
                head->val = list1->val;
                list1 = list1->next;
            }
            else{
                head->val = list2->val;
                list2 = list2->next;
            }
            head->next = new ListNode;
            head = head->next;
        }
        while (list1 == nullptr && list2 != nullptr){
            head->val = list2->val;
            list2 = list2->next;
            head->next = new ListNode;
            head = head->next;
        }
        while (list1 != nullptr && list2 == nullptr){
            head->val = list1->val;
            list1 = list1->next;
            head->next = new ListNode;
            head = head->next;
        }
        ListNode* g = p;
        while (g->next->next!=nullptr){
            g = g->next;
        }
        ListNode* t = g->next;
        g->next = nullptr;
        delete t;
        return p; 
    }
};