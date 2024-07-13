class Solution {
public:
    string smallestNumber(string pattern) {
        string res;
        int n = pattern.size();
        int j = 0;
        for (int i = 0; i <= n; ++i) {
            res.push_back('1' + i);
            if (i == n || pattern[i] == 'I') {
                reverse(res.begin() + j, res.end());
                j = i + 1;
            }
        }
        return res;
     }
};