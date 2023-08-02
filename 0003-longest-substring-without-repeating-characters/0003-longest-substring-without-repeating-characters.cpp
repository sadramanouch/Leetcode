class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maximum = 0;
        vector<int> Index(128, -1);
        int left = 0;
        
        for (int right = 0; right < n; right++) {
            if (Index[s[right]] >= left) {
                left = Index[s[right]] + 1;
            }
            Index[s[right]] = right;
            maximum = max(maximum, right - left + 1);
        }
        
        return maximum;
    }
};