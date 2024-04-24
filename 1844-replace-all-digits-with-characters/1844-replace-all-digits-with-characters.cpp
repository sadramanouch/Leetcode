class Solution {
public:
    string replaceDigits(string s) {
        int n = s.size();
        string res;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 1) { 
                res += s[i - 1] + (s[i] - '0'); 
            } 
            else { 
                res += s[i];
            }
        }
        return res;
    }
};
