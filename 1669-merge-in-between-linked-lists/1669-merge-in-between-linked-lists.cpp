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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* p = list1;
        int i = 1;
        while (i < a){
            list1 = list1->next;
            i++;
        }
        ListNode* tmp = list1->next;
        list1->next = list2;
        while (i <= b){
            tmp = tmp->next;
            i++;
        }
        while (list1->next){
            list1 = list1->next;
        }
        list1->next = tmp;
        return p;
    }
};