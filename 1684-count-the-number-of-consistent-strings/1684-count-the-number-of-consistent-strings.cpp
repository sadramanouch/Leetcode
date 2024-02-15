class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map <char, bool> hash;
        for (int i = 0; i<allowed.size(); i++){
            hash[allowed[i]] = true;
        }
        int count = 0;
        for (int i = 0; i<words.size(); i++){
            for (int j = 0; j<words[i].size(); j++){
                if (hash[words[i][j]] == false){
                    j = words[i].size();
                    count--;
                }
            }
            count++;
        }
        return count;
    }
};