class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> brokenSet(brokenLetters.begin(), brokenLetters.end());
        int n = text.size();
        int res = 0;
        bool canType = true;
        
        for (int i = 0; i < n; ++i) {
            if (text[i] == ' ') {
                if (canType) {
                    ++res;
                }
                canType = true;  
            } 
            else if (brokenSet.find(text[i]) != brokenSet.end()) {
                canType = false;  
            }
        }
        if (canType) {
            ++res;
        }
        
        return res;
    }
};