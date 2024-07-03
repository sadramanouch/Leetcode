class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int n = words.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (s.find(words[i]) == 0) { 
                count++;
            }
        }
        return count;
    }
};