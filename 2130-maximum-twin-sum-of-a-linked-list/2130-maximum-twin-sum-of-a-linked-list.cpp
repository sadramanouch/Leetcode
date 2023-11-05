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
    int pairSum(ListNode* head) {
        int sz = 0;
        stack<int> twins;
        ListNode* g = head;
        while (g){
            sz++;
            g = g->next;
        }
        g = head;
        sz = sz/2;
        int i = 0;
        while (i < sz){
            twins.push(g->val);
            g = g->next;
            i++;
        }
        int ans = 0;
        while (i >= sz && g){
            int tmp = twins.top();
            twins.pop();
            int res = tmp + g->val;
            if (res > ans){
                ans = res;
            }
            g = g->next;
            i++;
        }
        return ans;
    }
};