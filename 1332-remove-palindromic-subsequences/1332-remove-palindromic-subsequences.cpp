class Solution {
public:
    int removePalindromeSub(string s) {
        if (s.empty()) {
            return 0;
        }
        
        // Check if the entire string is a palindrome
        int left = 0, right = s.length() - 1;
        while (left < right) {
            if (s[left] != s[right]) {
                return 2; // If not a palindrome, can be removed in two steps
            }
            left++;
            right--;
        }
        
        return 1; // If it's a palindrome, can be removed in one step
    }
};
