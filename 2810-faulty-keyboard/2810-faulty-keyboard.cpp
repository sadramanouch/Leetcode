class Solution {
public:
    string finalString(string s) {
        int n = s.size();
        string ans = "";
        for (int i = 0; i < n; i++) {
            if (s[i] == 'i') {
                for (int j = 0; j < ans.size() / 2; j++) {
                    char temp = ans[j];
                    ans[j] = ans[ans.size() - 1 - j];
                    ans[ans.size() - 1 - j] = temp;
                }
            } 
            else {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};