class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> hash;
        for (auto & ch:s){
            hash[ch]++;
        }
        bool res = true;
        int n = s.size();
        int i = 0;
        while (hash[s[i+1]]){
            if (hash[s[i]] != hash[s[i+1]]){
                res = false;
                break;
            }
            i++;
        }
        return res;
    }
};