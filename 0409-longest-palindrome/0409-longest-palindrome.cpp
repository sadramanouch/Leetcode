class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> res;
        for (auto c : s){
            res[c]++;
        }
        int len = 0;
        bool odd = false;
        for (const auto & entry : res){
            len += entry.second / 2 * 2;
            if (entry.second % 2 != 0){
                odd = true;
            }
        }
        return odd ? len+1: len;
    }
};