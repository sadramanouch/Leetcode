class Solution {
public:
    int partitionString(string s) {
        unordered_set<char> charSet; 
        int count = 1;
        for (auto c: s){
            if (charSet.count(c)){
                count++;
                charSet.clear();
            }
            charSet.insert(c);
        }
        return count;
    }
};