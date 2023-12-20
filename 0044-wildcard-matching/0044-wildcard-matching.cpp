class Solution {
public:
    bool isMatch(string s, string p) {
        int n = s.size();
        int m = p.size();
        int i = 0, j = 0, match = 0, starIdx = -1;

        while (i < n) {
            if (j < m && (p[j] == s[i] || p[j] == '?')) {
                i++;
                j++;
            } else if (j < m && p[j] == '*') {
                starIdx = j;
                match = i;
                j++;
            } else if (starIdx != -1) {
                j = starIdx + 1;
                match++;
                i = match;
            } else {
                return false;
            }
        }

        while (j < m && p[j] == '*') {
            j++;
        }

        return j == m;
    }
};