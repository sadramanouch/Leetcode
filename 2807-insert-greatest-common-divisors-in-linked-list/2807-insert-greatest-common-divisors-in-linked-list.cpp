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
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* g = head;
        ListNode* h = head;
        ListNode* n = head->next;
        while (n){
            int x = g->val;
            int y = n->val;
            int ans = gcd(x, y);
            ListNode* k = new ListNode;
            k->val = ans;
            g->next = k;
            k->next = n;
            g = n;
            n = n->next;
        }
        return h;
    }
};