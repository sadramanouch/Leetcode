class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> charCount;

        for (char c : s) {
            charCount[c]++;
        }

        sort(s.begin(), s.end(), [&](char a, char b) {
            return charCount[a] > charCount[b] || (charCount[a] == charCount[b] && a < b);
        });

        return s;
    }
};