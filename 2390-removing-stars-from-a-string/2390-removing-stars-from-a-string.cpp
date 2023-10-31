class Solution {
public:
    string removeStars(string s) {
        int n = s.length();
        stack<char> sq;
        for (int i = 0; i < n; i++) {
            if (s[i] != '*') {
                sq.push(s[i]);
            } 
            else if (!sq.empty()) {
                sq.pop();
            }
        }
        string res;
        while (!sq.empty()) {
            res.push_back(sq.top());
            sq.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};