class Solution {
public:
    int partitionString(string s) {
        unordered_set<char> charSet;
        int Count = 1;
        
        for (char c : s) {
            if (charSet.count(c)) {
                Count++;
                charSet.clear();
            }
            charSet.insert(c);
        }
        
        return Count;
    }
};