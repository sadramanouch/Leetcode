class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int> hash;
        char res;
        for (int i = 0; i<s.size(); i++){
            hash[s[i]]++;
            if (hash[s[i]] == 2){
                res = s[i];
                break;
            }
        }
        return res;
    }
};