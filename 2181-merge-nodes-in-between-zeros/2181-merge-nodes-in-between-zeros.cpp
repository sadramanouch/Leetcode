class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* res = new ListNode(0);
        ListNode* ans = res;
        int sum = 0;
        head = head->next;
        while (head) {
            if (head->val == 0) {
                res->val = sum;
                sum = 0;
                if (head->next && head->next->val == 0) {
                    head = head->next;
                } 
                else if (head->next) {
                    res->next = new ListNode(0);
                    res = res->next;
                }
            } 
            else {
                sum += head->val;
            }
            head = head->next;
        }
        return ans;
    }
};
