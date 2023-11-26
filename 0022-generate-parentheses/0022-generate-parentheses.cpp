class Solution {
public:
    void perm(string now, int open, int close, vector<string> &ans) {
        if (open == 0 && close == 0) {
            ans.push_back(now);
            return;
        }

        if (open > 0) {
            string curr = now;
            curr.push_back('(');
            perm(curr, open - 1, close, ans);
        }

        if (close > open) {
            string curr = now;
            curr.push_back(')');
            perm(curr, open, close - 1, ans);
        }
    }

    vector<string> generateParenthesis(int n) {
        int open = n;
        int close = n;
        vector<string> ans;
        string now = "";
        perm(now, open, close, ans);
        return ans;
    }
};