class Solution {
public:
    bool isAnagram(string s, string t) {
         if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char, int> hash;
        for (char ch : s) {
            hash[ch]++;
        }
        for (char ch : t) {
            if (hash.find(ch) == hash.end() || hash[ch] == 0) {
                return false;
            }
            hash[ch]--;
        }
        return true;
    }
};