class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> charCount;

        for (char ch : s) {
            charCount[ch]++;
        }

        int length = 0;
        bool hasOdd = false;

        for (const auto& entry : charCount) {
            length += entry.second / 2 * 2;
            if (entry.second % 2 != 0) {
                hasOdd = true;
            }
        }

        return hasOdd ? length + 1 : length;
    }
};