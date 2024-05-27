class Solution {
public:
    int partitionString(string s) {
        unordered_set<char> charSet;
        int partitionCount = 1;
        
        for (char c : s) {
            if (charSet.count(c)) {
                partitionCount++;
                charSet.clear();
            }
            charSet.insert(c);
        }
        
        return partitionCount;
    }
};